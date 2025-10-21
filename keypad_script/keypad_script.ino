#include <Keypad.h>
const byte ROWS = 4;
const byte COLUMNS = 4;
const byte spk = 11;
int count = 0;
const byte green = 13;
char keys[ROWS][COLUMNS] = 
{
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'},

};

byte rowPins[ROWS] = {9,8,7,6};
byte colPins[COLUMNS] = {5,4,3,2};

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLUMNS);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(spk,OUTPUT);
  pinMode(green,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  char key = keypad.getKey();

while (key == 'A')
{
  digitalWrite(green,LOW);
  Serial.println("Incorrect");
  tone(spk,1000, 400);
  delay(250);
  tone(spk,2000, 400);
  delay(250);
  tone(spk,3000, 400);
  delay(250);
  tone(spk,4000, 400);
  delay(250);
  Serial.println("Alarm activated");

  char key = keypad.getKey();

  if (key == 'B')
  {
    
    tone(spk,1500,30);
    delay(400);
    tone(spk,1300,30);
    delay(400);
    digitalWrite(green,HIGH);
    Serial.print("Alarm deactivated");
    
    break;
  }

 

  
}









//   switch(key)
// {
//   case '1':
//     Serial.println("Correct");
//     break;

//   case 'D':
//     Serial.println("Incorrect");
//     tone(spk,400, 400);

//     break;
// }





  // if (key == '1')
  // {
  //   Serial.println("CORRECT");
  // }
 
  // else if (key == '3')
  // {
  //   Serial.println("CORRECT");
  // }
  
}
