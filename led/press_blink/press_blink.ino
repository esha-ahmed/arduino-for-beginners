const int button=8;
const int led=13;

int ledState;
int remainder;
int var;
int varTemp = 0;
int r;


void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  var=digitalRead(button);

  if(var==HIGH) {
    varTemp = 1;

    while(var==HIGH) {
      Serial.print("ledState = ");
      Serial.println(ledState);

      var=digitalRead(button);
      delay(1);             //wait until button is pressed
    } 
  } else varTemp = 0;

  if (varTemp == 1) ledState++;

  if(r=ledState%2==0) digitalWrite(led, HIGH);
  else digitalWrite(led, LOW);

  varTemp=0;
}