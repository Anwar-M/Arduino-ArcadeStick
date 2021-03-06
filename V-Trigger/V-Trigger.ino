/*
 * DIGITAL PIN  | BUTTON
 * 0            | L2
 * 1            | L1
 * 2            | R2
 * 3            | R1
 * 4            | CIRCLE
 * 5            | CROSS
 * 6            | TRIANGLE
 * 7            | SQUARE
 * 8            | SHARE
 * 9            | START
 * 10           | RIGHT
 * 11           | LEFT
 * 12           | DOWN
 * 13           | UP
 */

int delayBetweenInput = 100;

void setup() {
  pinMode(0, OUTPUT);  digitalWrite(0, HIGH);
  pinMode(1, OUTPUT);  digitalWrite(1, HIGH);
  pinMode(2, OUTPUT);  digitalWrite(2, HIGH);
  pinMode(3, OUTPUT);  digitalWrite(3, HIGH);
  pinMode(4, OUTPUT);  digitalWrite(4, HIGH);
  pinMode(5, OUTPUT);  digitalWrite(5, HIGH);
  pinMode(6, OUTPUT);  digitalWrite(6, HIGH);
  pinMode(7, OUTPUT);  digitalWrite(7, HIGH);
  pinMode(8, OUTPUT);  digitalWrite(8, HIGH);
  pinMode(9, OUTPUT);  digitalWrite(9, HIGH);
  pinMode(10, OUTPUT);  digitalWrite(10, HIGH);
  pinMode(11, OUTPUT);  digitalWrite(11, HIGH);
  pinMode(12, OUTPUT);  digitalWrite(12, HIGH);
  pinMode(13, OUTPUT);  digitalWrite(13, HIGH);

}

void loop() {
  digitalWrite(3, LOW);
  delay(25);
  digitalWrite(2, LOW);
  delay(20);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(9, LOW);
  delay(500);
  digitalWrite(9, HIGH);
  delay(100);
  digitalWrite(5, LOW);
  delay(500);
  digitalWrite(5, HIGH);
  delay(2000);
}
