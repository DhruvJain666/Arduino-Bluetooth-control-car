# **Arduino Bluetooth control car using L293D Motor Driver**
Today in this README.md we are going to Make DIY **Arduino Bluetooth control car** with **Arduino UNO R3, L293D Motor Driver, and HC-05 Bluetooth Module.** Here you will get Fully Detailed instructions for making **Arduino Bluetooth Controlled Car.** Codes are also Included.

## **How Arduino Bluetooth Controlled Car Works?**
This is a simple Micro-controller based car. The Micro-Controller is connected in the car. The Arduino is doing all this job. For receiving data wirelessly we are using the HC-05 Bluetooth module.

At first, We have to connect/ pair the Bluetooth module with the phone (Android) you want to control. Now, we are doing different operations such as when we press the forward button then the Phone sends a data value to Bluetooth module.

Next, we have to code in a way that if Arduino Gets a Certain Data (Suppose ‘F’ for forwarding) we have to make a certain condition for running the car in a certain direction. So, basically there are many switch cases in the Arduino code. For a known condition or a switch case, the car will perform the added functions in the code.

In the Same way,**F, B, L, R are used for moving the car Forward, Backward, Left, Right movement.**

## **Things Needed For Arduino Bluetooth Controlled Car**
1. **L293D Motor Driver Shield**

<img src = "https://github.com/DhruvJain666/Arduino-Bluetooth-control-car/blob/main/assets/Images/L293D%20Motor%20Driver%20Shield.jpeg" >

<img src = "https://github.com/DhruvJain666/Arduino-Bluetooth-control-car/blob/main/assets/Images/motor-shield-pinout.png" >

2. **HC-05 Bluetooth module**

<img src = "https://raw.githubusercontent.com/DhruvJain666/Arduino-Bluetooth-control-car/main/assets/Images/HC-05%20Bluetooth%20module.webp" >

3. **Battery(9V)**

<img src = "https://github.com/DhruvJain666/Arduino-Bluetooth-control-car/blob/main/assets/Images/Battery(9V).jpg" >

4. **Motors(2 pieces)**

<img src = "https://github.com/DhruvJain666/Arduino-Bluetooth-control-car/blob/main/assets/Images/Motors.jpeg" >

5. **Wheels (6 Pieces)**

<img src = "https://github.com/DhruvJain666/Arduino-Bluetooth-control-car/blob/main/assets/Images/Wheel.jpg" >

6. **Arduino UNO**

<img src = "https://github.com/DhruvJain666/Arduino-Bluetooth-control-car/blob/main/assets/Images/Arduino%20UNO.jpg" >

7. **Jumper Wire (Male-Male, Male-Female, Female-Female)**

<img src = "https://raw.githubusercontent.com/DhruvJain666/Arduino-Bluetooth-control-car/main/assets/Images/Jumper%20Wire.webp" >

8. **Mechanix Metal - 5**

<img src = "https://github.com/DhruvJain666/Arduino-Bluetooth-control-car/blob/main/assets/Images/MECHANICS%205.jpg" >


## **Tools Needed for Arduino Bluetooth Controlled Robot**
1. **Soldering Iron**

<img src = "https://github.com/DhruvJain666/Arduino-Bluetooth-control-car/blob/main/assets/Images/Soldering%20Iron.png" >

2. **Solder Wire**

<img src = "https://github.com/DhruvJain666/Arduino-Bluetooth-control-car/blob/main/assets/Images/Solder%20Wire.jpg" >

3. **Solder Paste**

<img src = "https://github.com/DhruvJain666/Arduino-Bluetooth-control-car/blob/main/assets/Images/Solder%20Paste.jpg" >

4. **Glue Gun**

<img src = "https://github.com/DhruvJain666/Arduino-Bluetooth-control-car/blob/main/assets/Images/Glue%20Gun.jpg" >


## ***Schematics* of the Bluetooth Control Car with L293D:**

<img src = "https://github.com/DhruvJain666/Arduino-Bluetooth-control-car/blob/main/assets/Images/Arduino-Bluetooth-control-car-with-L293D.jpg" >

### **Basic Concept of the Main Circuit**
1. Forward Condition

<img src = "https://github.com/DhruvJain666/Arduino-Bluetooth-control-car/blob/main/assets/Images/Forward%20Condition.png" >

2. Backward Condition

<img src = "https://github.com/DhruvJain666/Arduino-Bluetooth-control-car/blob/main/assets/Images/Backward%20Condition.png" >

3. Right Condition

<img src = "https://github.com/DhruvJain666/Arduino-Bluetooth-control-car/blob/main/assets/Images/Right%20Condition.png" >

4. Left Condition

<img src = "https://github.com/DhruvJain666/Arduino-Bluetooth-control-car/blob/main/assets/Images/Left%20Condition.png" >

5. Stop Condition

<img src = "https://github.com/DhruvJain666/Arduino-Bluetooth-control-car/blob/main/assets/Images/Stop%20Condition.png" >

## **Arduino Bluetooth Control Car using L293D *Code***
Before uploading the code to Arduino we need to add a library to Arduino. Just go to the following.

**Sketch> Include Library> Manage Libraries…**

<img src = "" >

Then Search for Adafruit Motor Shield Library(Adafruit has 2 Libraries for this topic V1 and V2. For our purpose we will only need the V1 library.) from the search bar. Now install the Library. In my case, I have already installed it. So, It is showing already installed.

```c
#include <AFMotor.h>

//initial motors pin
AF_DCMotor motor3(3, MOTOR34_64KHZ);
AF_DCMotor motor4(4, MOTOR34_64KHZ);

char command;

void setup() {
  Serial.begin(9600);  //Set the baud rate to your Bluetooth module.
}

void forward(){
  motor3.setSpeed(255);//Define maximum velocity
  motor3.run(FORWARD); //rotate the motor clockwise
  motor4.setSpeed(255);//Define maximum velocity
  motor4.run(FORWARD); //rotate the motor clockwise
  //delay(3000);
}

void back(){
  motor3.setSpeed(255); //Define maximum velocity
  motor3.run(BACKWARD); //rotate the motor anti-clockwise
  motor4.setSpeed(255); //Define maximum velocity
  motor4.run(BACKWARD); //rotate the motor anti-clockwise
  //delay(3000);
}

void left(){
  motor3.setSpeed(0);//Define minimum velocity
  motor3.run(FORWARD); //rotate the motor clockwise
  motor4.setSpeed(255);//Define maximum velocity
  motor4.run(FORWARD); //rotate the motor clockwise
  //delay(3000);
}

void right(){
  motor3.setSpeed(255);//Define minimum velocity
  motor3.run(FORWARD); //rotate the motor clockwise
  motor4.setSpeed(0);//Define minimum velocity
  motor4.run(FORWARD); //rotate the motor clockwise
  //delay(3000);
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
  Stop(); //initialize with motors stoped
  //Serial.println(command);
  
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
  ```
  ## **Troubleshoot:**
1. **The programmer** is not responding: If you face this error then it may be because of the Bluetooth Module. Always Disconnect the RX and the TX pins before uploading the code to the Arduino.
2. **The motor is not rotating in the right direction:** If you face this issue then you don’t need to modify any code. You just have to Interchange the motor wires. In a simple way, I can say just connect the Motor to the Motor driver as I have shown in the Circuit Diagram.

