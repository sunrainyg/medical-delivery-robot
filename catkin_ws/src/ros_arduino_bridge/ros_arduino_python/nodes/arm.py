#!/usr/bin/env python
import sys
import rospy
from ros_arduino_msgs.srv import * 

def ServoWrite_client(x, y):
    rospy.wait_for_service('/mobilebase_arduino2/servo_write')
    try:
        h = rospy.ServiceProxy('/mobilebase_arduino2/servo_write', ServoWrite)
        resp1 = h(x, y)
    except rospy.ServiceException, e:
        print "Service call failed: %s"%e
 
if __name__ == "__main__":
    ServoWrite_client(1,1)
