---
title: "Syringe Pump"
excerpt: "Ejects liquid at a user-specified flow rate for medical applications."
header:
  image: /assets/img/pump1.png
  teaser: /assets/img/pump2.jpg
   
---

# Features

* **Multiple Diameter Syringe Capability.** This syringe pump accommodates both standard 5 mL and 20 mL syringes. Two different size syringes can be placed side-by-side on the supports, so the user can pump syringes simultaneously or individually.
* **LED Fluid Level Indicator.** The green LED indicates that the pump is driving forward and pumping fluid. The user can pause the pump, triggering the yellow LED. The arm on the syringe pump hits the switch once the syringe pump is empty, triggering red LED light. The blue LED indicates that the syringe is retracting to its original position.
* **Adjustability Flow Rate.** The user can adjust the flow rate using the setSpeed function in the Arduino program. The setSpeed function considers the volumetric flow rate and volume of liquid the syringe dispenses every step. The stepper motor and Arduino software allow for control over the direction and speed of the syringe pump. 

| Off-the-shelf Parts Required              |
|----------------------------------------|
| Nema 17 Stepper Motor   |
| A4998 Stepper Motor Driver             |
| Panel Mount Latching Push Button       |
| Limit Switch                           |
| LED Indicator                          |
| Arduino Uno                            |
| Breadboard                             |
| AC-DC Power supply                     |
| Electrical Wires, Fasteners, Resistors |
| 5 mL Syringe                           |
| 20 mL Syringe                          |
| Aluminum Track 1' Length               |
| Flexible Coupler                       |
| Lead Screw                             |
| Linear Rods                            |
| Linear Bearing                         |

| 3D Printed Parts Required       |
|-------------------------|
| Plunger Holder          |
| Motor Mount             |
| Back Barrel Stabilizer  |
| Front Barrel Stabilizer |

# Arduino Code
[Arduino Code](https://github.com/rhurwitz33/rhurwitz33.github.io/blob/44a8f7b178433f448ab2431ac1ab4e5498513ae2/_drafts/steppermotorfinal.ino "Arduino Code Syringe Pump")

# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH35dfcQT936092f0e430f512e2512051b03?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Operating Instructions
Install one or both of the syringes onto the bases of the syringe pump. Control the flow rate of the pump with the setSpeed function in the Arduino program. In order to trigger the plunger to collect liquid, push the large button. Push the toggle button once to eject the liquid from the syringe. Push the toggle button again to stop the motion of the syringe. After the LED indicates that the syringe pump is empty, push the large button to retract the syringe pump. 

{% include gallery caption="Syringe Pump Gallery" %}
