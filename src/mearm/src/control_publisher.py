#!/usr/bin/env python
import rospy
from geometry_msgs.msg import Point

rospy.init_node('control_publisher')

pub = rospy.Publisher('listener',Point, queue_size=10)

rate = rospy.Rate(2)

point = Point()

point.x =1
point.y =2
point.z =2

while not rospy.is_shutdown():
        pub.publish(point)
	rate.sleep()

