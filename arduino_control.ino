/* 
 * rosserial Subscriber Example
 * Blinks an LED on callback
 */

#include <ros.h>
#include <std_msgs/Char.h>

ros::NodeHandle  nh;

void messageCb( const std_msgs::Char& toggle_msg){
  if(toggle_msg.data == 'w'){
    digitalWrite(13, 1);   // blink the led
    delay(500);
    digitalWrite(13, 0);
  }
  if(toggle_msg.data == 'a'){
    digitalWrite(13, 1);   // blink the led
    delay(500);
    digitalWrite(13, 0);
    delay(500);
    digitalWrite(13, 1);   // blink the led
    delay(500);
    digitalWrite(13, 0);
  }
  if(toggle_msg.data == 'd'){
    digitalWrite(13, 1);   // blink the led
    delay(1000);
    digitalWrite(13, 0);
    delay(1000);
    digitalWrite(13, 1);   // blink the led
    delay(1000);
    digitalWrite(13, 0);
    delay(1000);
    digitalWrite(13, 1);   // blink the led
    delay(1000);
    digitalWrite(13, 0);
  }
  if(toggle_msg.data == 's'){
    digitalWrite(13, 1);   // blink the led
    delay(1000);
    digitalWrite(13, 0);
    delay(1000);
    digitalWrite(13, 1);   // blink the led
    delay(1000);
    digitalWrite(13, 0);
    delay(1000);
    digitalWrite(13, 1);   // blink the led
    delay(1000);
    digitalWrite(13, 0);
    delay(1000);
    digitalWrite(13, 1);   // blink the led
    delay(1000);
    digitalWrite(13, 0);
  }
}

ros::Subscriber<std_msgs::Char> sub("chatter", &messageCb );

void setup()
{ 
  pinMode(13, OUTPUT);
  nh.initNode();
  nh.subscribe(sub);
}

void loop()
{  
  nh.spinOnce();
  delay(1);
}

