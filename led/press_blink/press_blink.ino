//This is the continuation of the blink file, this time we will use a button to control the led

// This code is part of a series of progects on arduino to go from 0 to 255!
// Written by Erick Ahmed and Esha Ahmed
// MIT License, 2022

const int button=8;
const int led=13;

int ledState;
int remainder;
int var;
int varTemp = 0;
int r;


void setup() {
  //added serial monitor for debuggin reasons
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
    } 
  } else varTemp = 0;

  if (varTemp == 1) ledState++;

  if(r=ledState%2==0) digitalWrite(led, HIGH);
  else digitalWrite(led, LOW);

  varTemp=0;
}