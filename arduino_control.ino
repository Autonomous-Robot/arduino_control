/* 
 * rosserial Subscriber Example
 * Blinks an LED on callback
 */

#include <ros.h>
#include <std_msgs/Char.h>
#include <AFMotor.h>

AF_DCMotor motorFL(1);
AF_DCMotor motorFR(2);
AF_DCMotor motorBL(3);
AF_DCMotor motorBR(4);

uint8_t i;
uint8_t s=100;
ros::NodeHandle  nh;

void messageCb( const std_msgs::Char& toggle_msg){
  if(toggle_msg.data == 'w'){
     motorFL.run(FORWARD);
     motorFR.run(FORWARD);
     motorBL.run(FORWARD);
     motorBR.run(FORWARD);
  
    motorFL.setSpeed(s);
    motorFR.setSpeed(s);
    motorBL.setSpeed(s);
    motorBR.setSpeed(s);
    delay(500);
    
    motorFL.setSpeed(0);
    motorFR.setSpeed(0);
    motorBL.setSpeed(0);
    motorBR.setSpeed(0);
    
    
  
  }
  
  if(toggle_msg.data == 'a'){
     motorFL.run(BACKWARD);
     motorFR.run(FORWARD);
     motorBL.run(BACKWARD);
     motorBR.run(FORWARD);
 
    motorFL.setSpeed(100);
    motorFR.setSpeed(100);
    motorBL.setSpeed(100);
    motorBR.setSpeed(100);
    delay(1000);
    
    motorFL.setSpeed(0);
    motorFR.setSpeed(0);
    motorBL.setSpeed(0);
    motorBR.setSpeed(0);
    
  
  }
  if(toggle_msg.data == 'd'){
    motorFL.run(FORWARD);
     motorFR.run(BACKWARD);
     motorBL.run(FORWARD);
     motorBR.run(BACKWARD);
  
    motorFL.setSpeed(100);
    motorFR.setSpeed(100);
    motorBL.setSpeed(100);
    motorBR.setSpeed(100);
    delay(1000);
    motorFL.setSpeed(0);
    motorFR.setSpeed(0);
    motorBL.setSpeed(0);
    motorBR.setSpeed(0);
    
  
  }
  if(toggle_msg.data == 's'){
    motorFL.run(BACKWARD);
     motorFR.run(BACKWARD);
     motorBL.run(BACKWARD);
     motorBR.run(BACKWARD);
  
    motorFL.setSpeed(s);
    motorFR.setSpeed(s);
    motorBL.setSpeed(s);
    motorBR.setSpeed(s);
    delay(500);
    motorFL.setSpeed(0);
    motorFR.setSpeed(0);
    motorBL.setSpeed(0);
    motorBR.setSpeed(0);
    
  
  }
}

ros::Subscriber<std_msgs::Char> sub("chatter", &messageCb );

void setup()
{ 
  nh.initNode();
  nh.subscribe(sub);
}

void loop()
{  
  nh.spinOnce();
  delay(1);
}

