/*
HC-SRO4 ultrasound sensor test
*/

const int  trigPin = 8; //pin for trigger
const int  echoPin = 9; // pin for echo

float duration = 0;
float distanceCM = 0;
float distanceIN = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin,OUTPUT); //trigger pin set as output, emits a soundwave
  pinMode(echoPin,INPUT); //echo pin set as input, receives soundwave
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin,LOW); //pin set to low to avoid issues at start
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH); //trigger pin sends soundwave
  delayMicroseconds(10); //delay for soundwave to travel back
  digitalWrite(trigPin,LOW);
  duration = pulseIn(echoPin,HIGH); //Pulse in calculates how long a pin detects a signal, in this case we want it to detect the duration of the echo pin in a 1 state
  distanceCM = (duration * 0.0343)/2; //since time is in microseconds, the factor turns to 0.0343. It is divided by 2 since it considers oneway distance
  distanceIN = distanceCM/2.54; //Converts metric distance to inches
  Serial.print("Distance(cm): ");
  Serial.print(distanceCM);
  Serial.print(" | Distance(IN)");
  Serial.println(distanceIN);

  delay(100);

}
