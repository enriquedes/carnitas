# Traffic Light Controller Project [2.2]

In this project we will be building a traffic light system using an Arduino Uno. With the help of a photoresistor and a laser pointer, the traffic light will change with the movement of an RC car.

![Traffic light project](https://github.com/enriquedes/carnitas/blob/master/img/IMG_1004.JPG)

# Requirements and Materials

* 1 x Arduino (Any Arduino works)
* 1 x Laser pointer
* 1 x Photoresistor
* 2 x RC cars
* 5 x 220 ohm resistor
* 2 x red LED
* 2 x green LED
* Jumper cables


# Build Instructions

LED's cathode legs are connected to each other and then connected to ground. 220-ohm resistors are connected to the LED's anode legs and then connected to their respective Arduino pins. The photoresitor is connected to 5V in one leg and in the other leg to a 220-ohm resistor which is connected to an Analog pin in the Arduino, and in the other end to ground. Use copper wire to extend LED's and the photoresistor place wherever you want.
![Arduino build](https://github.com/enriquedes/carnitas/blob/master/img/IMG_0991.JPG)
![Arduino build](https://github.com/enriquedes/carnitas/blob/master/img/Project%20build_bb.jpg)

# Usage

The project consists in a traffic light intersection powered by an Arduino Uno which changes with the help of a laser and a photoresistor. The photoresistor measures the amount of light in its surroundings; furthermore, if the laser is pointing to the photoresistor all the time and the laser gets blocked by an RC car, in this case, the light measurement will fluctuate resulting in changing the traffic lights from red to green.


# Team

The team is consisted by:

* Enrique Desentis
* Ayshik Chakma
* Rimo Creer

# Credits

Our project was based in a makeuseof project. Link attached.
https://www.makeuseof.com/tag/arduino-traffic-light-controller/
