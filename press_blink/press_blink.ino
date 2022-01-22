const int button = 8;
const int blue = 13;

int counter = 3;
int counterP = 2;

bool currentState = false;
bool lastState = false;
bool ledState = false;

void setup() {
  Serial.begin(9600);
  pinMode(blue, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  lastState = false;
  currentState = digitalRead(button);

  pointer

  if(currentState != lastState && currentState == HIGH && counterP %2 == 0) {
    ledState = true;
    counter = counter +1;
  } else if (counterP %2 != 0) {
    ledState = false;
    counter = counter + 1;
    }
Serial.print("counter");
  Serial.println(counter);
Serial.print("pointer");
Serial.println(counterP);
  digitalWrite(blue, ledState);
  delay(350);

 lastState = currentState;
}
  
