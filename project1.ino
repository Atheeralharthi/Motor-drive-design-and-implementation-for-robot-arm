#include <Servo.h>
  Servo servo1;
  Servo servo2; 
  Servo servo3; 
  Servo servo4; 
  Servo servo5; 


  int i = 0;

void setup()
{
  servo1.attach(8);
  servo2.attach(9);
  servo2.attach(10);
  servo2.attach(11);
  servo2.attach(12);
}

void loop()
{
  for (i = 0 ; i < 90 ; i++)
  {
     servo1.write(i);
     servo2.write(i);
     servo3.write(i);
     servo4.write(i);
     servo5.write(i);
    
    delay(10);
          
}
  
  for (i=90; i>0 ; i--)
  {
    servo1.write(i);
    servo2.write(i);
     servo3.write(i);
     servo4.write(i);
     servo5.write(i);
    delay(10);
  }
}
