const int button=8;
const int led=13;

int ledState;
int remainder;
int var;
int r;

int ledChange(int input) {
  if(r=input%2==0) {return 0;}
  else {return 1;}
}

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  var=digitalRead(button);

  if(var==0x1) {
    do {
    ledState++;
    Serial.print("ledState = ");
    Serial.println(ledState);
    }
    while(var==0x1); {delay(1);}
    }

  remainder=ledChange(ledState);
  Serial.print("remainder = ");
  Serial.println(ledState);
  
  if(remainder==0) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }     
}