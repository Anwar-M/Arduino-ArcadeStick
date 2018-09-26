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
 * 
 * This code tests all the buttons!!
 * 
 */

int holdInput = 100;
int delayBetweenInput = 500;

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

  // LP MP HP, LK MK HK, 3P, 3K
  digitalWrite(7, LOW);
  delay(holdInput);
  digitalWrite(7, HIGH);
  delay(delayBetweenInput);

  
  digitalWrite(6, LOW);
  delay(holdInput);
  digitalWrite(6, HIGH);
  delay(delayBetweenInput);
  
  digitalWrite(3, LOW);
  delay(holdInput);
  digitalWrite(3, HIGH);
  delay(delayBetweenInput);
  
  digitalWrite(5, LOW);
  delay(holdInput);
  digitalWrite(5, HIGH);
  delay(delayBetweenInput);
  
  digitalWrite(4, LOW);
  delay(holdInput);
  digitalWrite(4, HIGH);
  delay(delayBetweenInput);
  
  digitalWrite(2, LOW);
  delay(holdInput);
  digitalWrite(2, HIGH);
  delay(delayBetweenInput);
  
  digitalWrite(1, LOW);
  delay(holdInput);
  digitalWrite(1, HIGH);
  delay(delayBetweenInput);
  
  digitalWrite(0, LOW);
  delay(holdInput);
  digitalWrite(0, HIGH);
  delay(delayBetweenInput);

  // LEFT RIGHT DOWN UP

  digitalWrite(11, LOW);
  delay(holdInput);
  digitalWrite(11, HIGH);
  delay(delayBetweenInput);
  
  digitalWrite(10, LOW);
  delay(holdInput);
  digitalWrite(10, HIGH);
  delay(delayBetweenInput);
  
  digitalWrite(12, LOW);
  delay(holdInput);
  digitalWrite(12, HIGH);
  delay(delayBetweenInput);
  
  digitalWrite(13, LOW);
  delay(holdInput);
  digitalWrite(13, HIGH);
  delay(delayBetweenInput);

  // START
  
  digitalWrite(9, LOW);
  delay(holdInput);
  digitalWrite(9, HIGH);
  delay(4*delayBetweenInput);
  
  digitalWrite(9, LOW);
  delay(holdInput);
  digitalWrite(9, HIGH);
  delay(2*delayBetweenInput);

  // SHARE??
//  
//  digitalWrite(8, LOW);
//  delay(holdInput);
//  digitalWrite(8, HIGH);
//  delay(delayBetweenInput);

  delay(5000);
}
