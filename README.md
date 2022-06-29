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


## **Schematics of the Bluetooth Control Car with L293D:**

<img src = "https://github.com/DhruvJain666/Arduino-Bluetooth-control-car/blob/main/assets/Images/Arduino-Bluetooth-control-car-with-L293D.jpg" >

### **Concept**
1. Forward Condition

<img src = "" >

2. Backward Condition

<img src = "" >

3. Right Condition

<img src = "" >

4. Left Condition

<img src = "" >

5. Stop Condition

<img src = "" >
