 #!/usr/bin/env python
import roslib
import tf
import rospy

if _name_ == '_main_':
	rospy.init_node('robot_tf_broadcaster')
	br = tf.TransformBroadcaster()
	rate = float(rospy.get_param('~rate', '1.0'))
	
	while(true):
		br.sendTransform((1,1,0),tf.transformations.quaternion_from_euler(0, 0, msg.theta))
		
		
	
