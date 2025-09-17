const int analogPin(A0);
const int minSensor;
int sensorValue;
const float percentage;
void setup() {
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
  Serial.begin(9600);
  
  sensorValue = analogRead(A0);

  percentage =  = map(sensorValue, 0, 1023, 0, 100);
}

void loop() 
{
  //Serial.println(float(sensorValue/1023 * 100));
  Serial.println(percentage);
  delay(10);



}

