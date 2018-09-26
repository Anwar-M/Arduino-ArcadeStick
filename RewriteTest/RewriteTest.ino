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
 * 8            | SELECT
 * 9            | START
 * 10           | RIGHT
 * 11           | LEFT
 * 12           | DOWN
 * 13           | UP
 */

int delayBetweenInput = 190;

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
  upright(1);
  delayFrame(25);
  R1(1);
  delayFrame(30);
  down(1);
  square(1);
  down(1);
  downright(1);
  right(1);
  circle(1);
  delay(3000);
  upleft(1);
  delay(1000);
}


void delayFrame(uint8_t nFrames) {
  delay(16.67*nFrames);
}

void L2(uint8_t nFrames) {
  digitalWrite(0, LOW);
  delayFrame(nFrames);
  digitalWrite(0, HIGH);
}
void L1(uint8_t nFrames) {
  digitalWrite(1, LOW);
  delayFrame(nFrames);
  digitalWrite(1, HIGH);
}
void R2(uint8_t nFrames) {
  digitalWrite(2, LOW);
  delayFrame(nFrames);
  digitalWrite(2, HIGH);
}
void R1(uint8_t nFrames) {
  digitalWrite(3, LOW);
  delayFrame(nFrames);
  digitalWrite(3, HIGH);
}
void circle(uint8_t nFrames) {
  digitalWrite(4, LOW);
  delayFrame(nFrames);
  digitalWrite(4, HIGH);
}
void cross(uint8_t nFrames) {
  digitalWrite(5, LOW);
  delayFrame(nFrames);
  digitalWrite(5, HIGH);
}
void triangle(uint8_t nFrames) {
  digitalWrite(6, LOW);
  delayFrame(nFrames);
  digitalWrite(6, HIGH);
}
void square(uint8_t nFrames) {
  digitalWrite(7, LOW);
  delayFrame(nFrames);
  digitalWrite(7, HIGH);
}

void select(uint8_t nFrames) {
  digitalWrite(8, LOW);
  delayFrame(nFrames);
  digitalWrite(8, HIGH);
}
void options(uint8_t nFrames) {
  digitalWrite(9, LOW);
  delayFrame(nFrames);
  digitalWrite(9, HIGH);
}

void right(uint8_t nFrames) {
  digitalWrite(10, LOW);
  delayFrame(nFrames);
  digitalWrite(10, HIGH);
}

void left(uint8_t nFrames) {
  digitalWrite(11, LOW);
  delayFrame(nFrames);
  digitalWrite(11, HIGH);
}

void down(uint8_t nFrames) {
  digitalWrite(12, LOW);
  delayFrame(nFrames);
  digitalWrite(12, HIGH);
}

void up(uint8_t nFrames) {
  digitalWrite(13, LOW);
  delayFrame(nFrames);
  digitalWrite(13, HIGH);
}

void downright(uint8_t nFrames) {
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
  delayFrame(nFrames);
  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);
}

void upright(uint8_t nFrames) {
  digitalWrite(13, LOW);
  digitalWrite(10, LOW);
  delayFrame(nFrames);
  digitalWrite(13, HIGH);
  digitalWrite(10, HIGH);
}

void downleft(uint8_t nFrames) {
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  delayFrame(nFrames);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
}

void upleft(uint8_t nFrames) {
  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  delayFrame(nFrames);
  digitalWrite(13, HIGH);
  digitalWrite(11, HIGH);
}

