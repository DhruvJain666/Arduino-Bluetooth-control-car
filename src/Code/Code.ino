#include <AFMotor.h>

//initial motors pin
AF_DCMotor motor3(3, MOTOR34_1KHZ);
AF_DCMotor motor4(4, MOTOR34_1KHZ);

char command;

void setup() {
  Serial.begin(9600);  //Set the baud rate to your Bluetooth module.
}

void forward(){
  motor3.setSpeed(255);//Define maximum velocity
  motor3.run(FORWARD); //rotate the motor clockwise
  motor4.setSpeed(255);//Define maximum velocity
  motor4.run(FORWARD); //rotate the motor clockwise
  delay(3000);
}

void back(){
  motor3.setSpeed(255); //Define maximum velocity
  motor3.run(BACKWARD); //rotate the motor anti-clockwise
  motor4.setSpeed(255); //Define maximum velocity
  motor4.run(BACKWARD); //rotate the motor anti-clockwise
  delay(3000);
}

void left(){
  motor3.setSpeed(0);//Define minimum velocity
  motor3.run(FORWARD); //rotate the motor clockwise
  motor4.setSpeed(255);//Define maximum velocity
  motor4.run(FORWARD); //rotate the motor clockwise
  delay(3000);
}

void right(){
  motor3.setSpeed(255);//Define minimum velocity
  motor3.run(FORWARD); //rotate the motor clockwise
  motor4.setSpeed(0);//Define minimum velocity
  motor4.run(FORWARD); //rotate the motor clockwise
  delay(3000);
}

void Stop(){
  motor3.setSpeed(0); //Define minimum velocity
  motor3.run(RELEASE); //stop the motor when release the button
  motor4.setSpeed(0); //Define minimum velocity
  motor4.run(RELEASE); //stop the motor when release the button
}

void loop() {
  while(Serial.available()==0){
    
  }
  command = Serial.read();
  Serial.println(command);
  Stop(); //initialize with motors stoped
  switch(command){
    case 'F':
      forward();
      break;
    case 'B':
       back();
      break;
    case 'L':
      left();
      break;
    case 'R':
      right();
      break;
    }
  }
