#include <Servo.h>

Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;

int potpin1 =0;
int potpin2 =1;
int potpin3 =2;
int potpin4 =3;
int potpin5 =4;

int val;

void setup()
{
  myservo1.attach(8);
  myservo2.attach(9);
  myservo3.attach(10);
  myservo4.attach(11);
  myservo5.attach(12);
}

void loop()
{
  val=analogRead(potpin1);
   val = map(val,0 , 1023, 0, 180);
    myservo1.write(val);
  
    val=analogRead(potpin2);  
     val = map(val,0 , 1023, 0, 180);
      myservo2.write(val);
  
     val=analogRead(potpin3);  
      val = map(val,0 , 1023, 0, 180);
       myservo3.write(val);
         
      val=analogRead(potpin4);  
       val = map(val,0 , 1023, 0, 180);
       myservo4.write(val);
  
      val=analogRead(potpin5);  
      val = map(val,0 , 1023, 0, 180);
       myservo5.write(val);
  
       delay(100);
}
