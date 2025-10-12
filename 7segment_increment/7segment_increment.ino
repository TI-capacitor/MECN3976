const byte A = 13;
const byte B = 12;
const byte C = 11;
const byte D = 10;
const byte E = 9;
const byte F = 8;
const byte G = 7;
const byte Bz = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(Bz,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(A,LOW);// 1
  digitalWrite(B, HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E,LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);

  digitalWrite(Bz, HIGH);
  delay(80);
  digitalWrite(Bz, LOW);
  delay(80);
  

  digitalWrite(A,HIGH); //2
  digitalWrite(B, HIGH);
  digitalWrite(C,LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);

  digitalWrite(Bz, HIGH);
  delay(80);
  digitalWrite(Bz, LOW);
  delay(80);

  digitalWrite(A,HIGH);//3
  digitalWrite(B, HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E,LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);

  digitalWrite(Bz, HIGH);
  delay(80);
  digitalWrite(Bz, LOW);
  delay(80);


  digitalWrite(A,LOW);//4
  digitalWrite(B, HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E,LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);

  digitalWrite(Bz, HIGH);
  delay(80);
  digitalWrite(Bz, LOW);
  delay(80);

  digitalWrite(A,HIGH);//5
  digitalWrite(B, LOW);
  digitalWrite(C,HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E,LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);

  digitalWrite(Bz, HIGH);
  delay(80);
  digitalWrite(Bz, LOW);
  delay(80);


  digitalWrite(A,HIGH);//6
  digitalWrite(B,LOW);
  digitalWrite(C,HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
 
 
  digitalWrite(Bz, HIGH);
  delay(80);
  digitalWrite(Bz, LOW);
  delay(80);

  digitalWrite(A,HIGH);//7
  digitalWrite(B, HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E,LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);

  digitalWrite(Bz, HIGH);
  delay(80);
  digitalWrite(Bz, LOW);
  delay(80);

  digitalWrite(A,HIGH);//8
  digitalWrite(B, HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);

  digitalWrite(Bz, HIGH);
  delay(80);
  digitalWrite(Bz, LOW);
  delay(80);

  digitalWrite(A,HIGH);//9
  digitalWrite(B, HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E,LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);

  digitalWrite(Bz, HIGH);
  delay(80);
  digitalWrite(Bz, LOW);
  delay(80);

  digitalWrite(A,HIGH);//0
  digitalWrite(B, HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);

  delay(1000);





}
