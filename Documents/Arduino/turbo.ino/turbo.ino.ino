const int A_pin1 = 5; //backward pin, right wheel
const int A_pin2 = 6; //forward pin, right wheel
const int B_pin1 = 9; //backward pin, left wheel
const int B_pin2 = 10; //forward pin, left wheel

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
  


}
