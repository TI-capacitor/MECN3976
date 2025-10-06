/*This code turns on a led and the other one off when a button is pressed.
When the button is not pressed the pin's output status are reversed*/
int state1 = 0;
int state2 = 0;
int state3 = 0;
void setup() {
  pinMode(4, OUTPUT);
  pinMode(11, INPUT);
  pinMode(9,OUTPUT);
  pinMode(2,INPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600); //Serial monitor is initialized


 
}

void loop() {
state1 = digitalRead(11);
state2 = digitalRead(2);//state saves the state of pin 11
 //Allows user to see state of pin 11 on serial monitor
  if (state1 == HIGH)
  {
    digitalWrite(4,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(5,LOW);
  }

  else if (state2 == HIGH)
  {
    digitalWrite(4,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(5,LOW);
  }
  else if (state1 == LOW && state2 == LOW)
  {
    digitalWrite(4,LOW);
    digitalWrite(9,LOW);
    digitalWrite(5,HIGH);
  }
    else if (state1 == HIGH && state2 == HIGH)
  {
    digitalWrite(4,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(5,LOW);
  }


}
