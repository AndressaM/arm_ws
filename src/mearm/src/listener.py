#!/usr/bin/env python
import rospy
from geometry_msgs.msg import Point

def callback(msg):
	posx=msg.x
	posy=msg.y
	posz=msg.z
	
	print posy+2
	print posx+10

rospy.init_node('listener')

sub = rospy.Subscriber('listener',Point,callback)

rospy.spin()
