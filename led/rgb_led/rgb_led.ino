// This progect uses a common anode rgb led combined with three potentiometers to generate any of the 16M color the led can physically make

// This code is part of a series of progects on arduino to go from 0 to 255!
// MIT License, 2022

// TODO: define each pin, they shoulb be all analog pins from A0 to A5
int ledR;
int ledG;
int ledB;

int potR;
int potG;
int potB;

//initializing all variables used in the program
int readR;
int readG;
int readB;


//TODO: create every pinMode [remember: pinMode(pinNumber, I/O);]
void setup() {

}

void loop() {

  //remember: analogRead(pin) ---> analogRead() goes from 0 to 1023;
  readR = analogRead(potR);
  readG = analogRead(potG);
  readB = analogRead(potB);

  // 1024 values from analogRead
  // 256 values to analogWrite
  // how to interface them? you can do this even without creating variables... ;)

  // remember: analogWrite(pin, value, frequency) ---> NOTE: value must be in from 0 to 255; frequency is optional: test it!
  analogWrite();
  analogWrite();
  analogWrite();
}