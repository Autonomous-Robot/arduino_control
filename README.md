arduino_control
===============

code for Arduino control sketch 

Arduino control is a Arduino sketch of controlling the four motors of the Robot. It needs [rosserial](http://wiki.ros.org/rosserial_arduino/Tutorials/Arduino%20IDE%20Setup) package and [webtools](https://github.com/Autonomous-Robot/webtools)

###Installation:

1. Install rosserial

    Because of Binary is broken for ROS Groovy, install from source [rosserial](http://wiki.ros.org/rosserial_arduino/Tutorials/Arduino%20IDE%20Setup)
    
2. Install arduino_control

        git clont https://github.com/Autonomous-Robot/arduino_control.git

3. Install [webtools](https://github.com/Autonomous-Robot/webtools)
        
###Configuration

1. Change permisson of serial port of Arduino

        sudo chmod a+rw /dev/ttyACM0
Change ttyACM0 accordingly

2. Upload sketch to Arduino

###Run

1. Run roscore

        roscore
    
2. Run rosserial

        rosrun rosserial_python serial_node.py /dev/ttyACM0
Change ttyACM0 accordingly
