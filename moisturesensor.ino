#include<Servo.h>
Servo s;
int input=A0;
int output=9;

void setup()
{
  pinMode(output,OUTPUT);
  Serial.begin(9600);
  s.attach(output);
}

void loop()
{
  int value=analogRead(input);
  Serial.println(value);
  int threshold=400;
  if(value<threshold)
  {
    for(int i=0;i<180;i++)
    {
      s.write(i);
      delay(20);
    }
    for(int i=180;i>0;i--)
    {
      s.write(i);
      delay(20);
    }
  }
}
