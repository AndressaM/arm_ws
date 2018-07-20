from MeArmKinematics import MeArmKinematics
#from MeArm import MeArm
from DQ import *
import numpy as np
import time
import sys

import rospy
from geometry_msgs.msg import Point

def callback(msg):
	posx=msg.x
	posy=msg.y
	posz=msg.z
	position = np.array(posx, posy, posz)

	kinematics = MeArmKinematics()
	#mearm = MeArm(baseServoPin = 4, rightServoPin = 17, leftServoPin = 27, handServoPin = 22)

	theta = np.array([0, 0, 0])

	theta1 = np.arctan2(position[1], position[0])

	r = DQ([np.cos(theta1/2), 0, 0, np.sin(theta1/2), 0, 0, 0, 0])
	p = DQ([0, position[0], position[1], position[2] , 0, 0, 0, 0])

	xd = r + (1/2) * DQ.E_ * p * r

	error = 1
	epsilon = 0.1
	dt = 0.1

	while np.linalg.norm(error) > epsilon:
	    x = kinematics.fkm(theta)
	    J = kinematics.jacobian(theta)
	    error = vec8(xd - x)
	    theta = theta + np.linalg.pinv(J) @ error * dt

	    #mearm.setTheta(theta * 180/np.pi)

	    time.sleep(0.0001)
	    print(theta * 180 / np.pi)

	mearm.setHand(95)
	input()
	mearm.closeConn()




rospy.init_node('pos_control')

sub = rospy.Subscriber('listener',Point,callback)

rospy.spin()


