const int green = 13;
const int blue = 12;

void setup() {
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  digitalWrite(green, HIGH);
  digitalWrite(blue, LOW);
  delay(1000);  
  digitalWrite(green, LOW);
  digitalWrite(blue, HIGH);
  delay(100);
}
