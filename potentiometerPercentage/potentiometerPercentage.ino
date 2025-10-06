const int PIN = A0;
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
  



}

void loop() 
{
  int rawvalue = analogRead(PIN);
  int percentage = map(rawvalue, 0, 1023, 0, 100);
  Serial.println(percentage);
  if (percentage > 10 && percentage <20)
    {
      digitalWrite(2, HIGH);
    }
  else 
  {
    digitalWrite(2,LOW);
  }
    if (percentage > 10 && percentage <20)
    {
      digitalWrite(2, HIGH);
    }
  else 
  {
    digitalWrite(2,LOW);
  }
    if (percentage > 30 && percentage <40)
    {
      digitalWrite(2, HIGH);
    }
  else 
  {
    digitalWrite(2,LOW);
  }
    if (percentage > 10 && percentage <20)
    {
      digitalWrite(2, HIGH);
    }
  else 
  {
    digitalWrite(2,LOW);
  }
    if (percentage > 10 && percentage <20)
    {
      digitalWrite(2, HIGH);
    }
  else 
  {
    digitalWrite(2,LOW);
  }
    if (percentage > 10 && percentage <20)
    {
      digitalWrite(2, HIGH);
    }
  else 
  {
    digitalWrite(2,LOW);
  }
  delay(100);



}

