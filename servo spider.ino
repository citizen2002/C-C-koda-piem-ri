#include <Servo.h>

// pinouts  
int Red_Led = 12; // Red LED connected to pin 12 
int Yellow_Led = 11; // Yellow LED connected to pin 11  
int Left_Reverse = 0; // Right motor control 1 connected to pin ...  
int Left_Forward = 0; // Right motor control 2 connected to pin ...
int Right_Forward = 0; // Left motor control 1 connected to pin ... 
int Right_Reverse = 0; // Left motor control 2 connected to pin ...
int Back_Left = 0; // Back motor control 1 connected to pin ...
int Back_Right = 0; // Back motor control 2 connected to pin ...

void setup() {
  pinMode(Red_Led, OUTPUT); // setting up pin outputs
  pinMode(Yellow_Led, OUTPUT);
  pinMode(Left_Reverse, OUTPUT); // L1 
  pinMode(Left_Forward, OUTPUT); // L2  
  pinMode(Right_Forward, OUTPUT); // L3 
  pinMode(Right_Reverse, OUTPUT); // L4
  pinMode(Back_Left, OUTPUT); // L5
  pinMode(Back_Right, OUTPUT); // L6
}  

void loop() {  
  digitalWrite(Red_Led, HIGH); //turns on red LED  
  digitalWrite(Yellow_Led, HIGH); //turns on yellow LED  
  delay(500);
  digitalWrite(Red_Led, LOW); //turns off red LED  
  digitalWrite(Yellow_Led, LOW); //turns off yellow LED  
  delay(500);  
  //Turn on the motors and make Spider move  
  analogWrite(Left_Reverse, 90); //run left motor backwards at PWM speed 90  
  delay(500); //run for half a second  
  analogWrite(Left_Reverse, 0); //stop left motor  
  delay(200); //run for 2 seconds  
  analogWrite(Right_Reverse, 90); //run right motor backwards at PWM speed 90  
  delay(500); //run for half a second  
  analogWrite(Right_Reverse, 0); //stop right motor  
  analogWrite(Left_Forward, 90); //run left motor forward at PWM speed 90  
  delay(500); //wait for half a second  
  analogWrite(Left_Forward, 0); //stop left motor  
  analogWrite(Right_Forward, 90); //run right motor forward at PWM speed 90  
  delay(500); //run for half a second  
  analogWrite(Right_Forward, 0); //stop right motor  
  analogWrite(Left_Reverse, 90); //run left motor backwards at PWM speed 90  
  delay(500); //run for half a second  
  analogWrite(Left_Reverse, 0); //stop left motor  
  delay(200); //run for 2 seconds  
  analogWrite(Right_Reverse, 90); //run right motor backwards at PWM speed 90  
  delay(500); //run for half a second  
  analogWrite(Right_Reverse, 0); //stop right motor  
  analogWrite(Left_Forward, 90); //run left motor forward at PWM speed 90  
  delay(500); //wait for half a second  
  analogWrite(Left_Forward, 0); //stop left motor  
  analogWrite(Right_Forward, 90); //run right motor forward at PWM speed 90  
  delay(500); //run for half a second  
  analogWrite(Right_Forward, 0); //stop right motor  
}