/*
This script is to test a joystick input
*/
#define PB 11
#define VRX_pin A0
#define VRY_pin A1

int xValue = 0; //values for x and y set to 0
int yValue = 0;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); //initializes serial monitor

}

void loop() {
  // put your main code here, to run repeatedly:
xValue = analogRead(VRX_pin); //reads x value on joystick
yValue = analogRead(VRY_pin); //reads y value on joystick
Serial.println("x = "); 
Serial.println(xValue); //Displays x value
Serial.println("y = ");
Serial.println(yValue); //Displays y value

delay(100); //delay to offer serial monitor breathing room


}
