#define led1 6
#define led2 5
#define button1 11
#define button2 10

void setup() {

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
}

void loop() {

  // Button 1 → Slow Blink
  if (digitalRead(button1) == HIGH) {

    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(500);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(500);
  }

  // Button 2 → Fast Blink
  else if (digitalRead(button2) == HIGH) {

    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(100);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(100);
  }

  // No button pressed
  else {

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }
}