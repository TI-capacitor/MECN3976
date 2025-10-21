#include <Bluepad32.h>

// ---- Motor pin definitions ----
#define IN1 2
#define IN2 0
#define IN3 5
#define IN4 18

ControllerPtr myController;

void onConnectedController(ControllerPtr ctl) {
  Serial.println("Controller connected!");
  myController = ctl;
}

void onDisconnectedController(ControllerPtr ctl) {
  Serial.println("Controller disconnected!");
  myController = nullptr;
}

void setup() {
  Serial.begin(115200);
  Serial.println("DualShock 4 Tank Rover - No PWM, No EN pins");

  BP32.setup(&onConnectedController, &onDisconnectedController);
  BP32.forgetBluetoothKeys();

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  stopMotors();
}

void loop() {
  BP32.update();

  if (myController && myController->isConnected()) {
    int lx = myController->axisX();
    int ly = myController->axisY();

    bool forward = (ly < -200);
    bool backward = (ly > 200);
    bool left = (lx < -200);
    bool right = (lx > 200);

    if (forward && !left && !right)
      moveForward();
    else if (backward && !left && !right)
      moveBackward();
    else if (left && !forward && !backward)
      turnLeft();
    else if (right && !forward && !backward)
      turnRight();
    else
      stopMotors();
  }

  delay(20);
}

// ---- Movement functions ----
void moveForward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  Serial.println("Forward");
}

void moveBackward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  Serial.println("Backward");
}

void turnLeft() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);   // left motor backward
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);    // right motor forward
  Serial.println("Left");
}

void turnRight() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);    // left motor forward
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);   // right motor backward
  Serial.println("Right");
}

void stopMotors() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  Serial.println("Stop");
}
