
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, INPUT);
}

void loop() {
  long s1 = digitalRead(10);
  Serial.println(s1);
  
  if (s1 == HIGH) {
    delay(3000);
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(11, LOW);
  } else {
    delay(500);
    digitalWrite(13, LOW);
    digitalWrite(11, HIGH);
  }
}
