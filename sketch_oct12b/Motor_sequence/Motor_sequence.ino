/*
This script turns on a motor and changes its direction using an H bridge
*/
//Pins set as variables
const int In1 = 3;
const int In2 = 5;
const int In3 = 6;
const int In4 = 9;



void setup() {
  // put your setup code here, to run once:
pinMode(In1,OUTPUT); //pins set as output
pinMode(In2,OUTPUT);
pinMode(In3,OUTPUT);
pinMode(In4,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

//Turns motors cw 
for (int i = 0; i < 230; i++)
{
  Serial.println(i);
  delay(20);
  digitalWrite(In1,HIGH);
  digitalWrite(In3,HIGH);
  digitalWrite(In2,LOW);
  digitalWrite(In4,LOW);
  
}
//turns motors ccw
for (int i = 230; i > 0; i--)
{
  Serial.println(i);
  delay(20);
  digitalWrite(In1,LOW);
  digitalWrite(In3,LOW);
  digitalWrite(In2,HIGH);
  digitalWrite(In4,HIGH);


}

}
