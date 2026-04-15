# MARS-TASK-2
# IR Sensor Object Counter using Arduino

##  Project Overview

This project counts objects using an IR sensor. Whenever an object passes in front of the sensor, the count increases and is shown on an LCD display.

---
 
##  Components Used

* Arduino board (Uno)
* IR Sensor Module
* 16x2 LCD with I2C module
* Jumper wires
* Breadboard

---

##  Working Principle

The IR sensor detects the presence of an object when the infrared beam is interrupted.

* When an object is detected, the sensor output goes LOW.
* This signal is read by the Arduino using `digitalRead()`.
* A flag variable (`a`) ensures that each object is counted only once.
* The count value is displayed on the LCD screen using I2C communication.

---

##  Circuit Connections

* IR Sensor OUT → Digital Pin 8
* LCD SDA → A4
* LCD SCL → A5
* VCC → 5V
* GND → GND

---


##  What I Learned

* Basics of I2C communication with LCD
* Importance of using a flag variable to avoid multiple counts
* Debugging using Serial Monitor

---

##  Challenges Faced
One challenge was correctly wiring the LCD, and another was designing the logic using a flag variable (a) to ensure each object is counted only once.


---
##  Conclusion

This project was very interesting and helped me learn a lot about sensors, Arduino, and circuit design. It increased my curiosity to explore more in this field, and I look forward to working on more such projects and contributing further. It also motivated me to be an active part of the club.

---
