const int A_pin1 = 5; //backward pin
const int A_pin2 = 6; //forward pin
const int B_pin1 = 9; //backwad pin
const int B_pin2 = 10; //forward pin

void setup() {
  // put your setup code here, to run once

  pinMode(A_pin1, OUTPUT);
  pinMode(A_pin2, OUTPUT);
  pinMode(B_pin1, OUTPUT);
  pinMode(B_pin2, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int speed = 125;

  analogWrite(B_pin1, speed);
  analogWrite(A_pin1, 230);

  Serial.println(speed);

  delay(100);
}
