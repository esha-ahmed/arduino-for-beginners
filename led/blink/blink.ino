//This code is the most basic thing you can do with Arduino: turn on a bunch of leds!

// This code is part of a series of progects on arduino to go from 0 to 255!
// Written by Erick Ahmed and Esha Ahmed
// MIT License, 2022

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
