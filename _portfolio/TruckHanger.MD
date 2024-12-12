---
title: "SLS Truck Hanger + Motor Mount"
excerpt: "Generative design solution for mounting a motor to a longboard truck hanger."
header:
  image: assets/img/TruckFront.jpg
  teaser: assets/img/TruckIso.jpg
   
---

## Applications of Generative Design
Powder bed fusion is an advantageous method for manufacturing parts for the aerospace industry, as metal powder-printed parts can be made high quality and lightweight. Selectively sintering powder produces dense, dimensionally accurate parts, with post-processing steps and quality control which meet the aerospace industry’s additive manufacturing demands [1]. Generative design optimizes these parts for minimal mass or maximal rigidity, outputting unique geometry based on the forces simulated by the user. For example, generative design was used to optimize a landing gear door bracket and jet engine bracket to save weight in an airplane engine [2]. 

Previously, researchers have used generative design to save weight or improve rigidity of parts. The pairing of generative design with powder bed fusion also expands the options of lightweight geometries that can be accurately manufactured. As a result, components can be crafted in one piece through generative design without requiring separate rapid prototyping cycles for different parts. GE Aviation used generative design to reduce the number of parts in a jet engine fuel nozzle tip from 20 to one [3]. GE Aviation mass produces metal printed parts for the LEAP engine, reducing weight of the product, which improves its fuel efficiency.
	
## CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a45df57d046776f769?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a4eccc39d88aa213a2?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

## Generative Design Process
The application of the proper load cases signals to Fusion 360 where material is not needed, to minimize the mass of the model while retaining the product’s function. If the load cases are not applied in the correct places or the loads are underestimated, the hanger would not be able to support the weight of the rider and the skateboard. In addition to the force of gravity, the hanger also experiences dynamic forces, including centrifugal forces from the turning of the skateboard, axial forces from accelerating or braking, and impact forces if the skateboard rams into an object. The motor mount also experiences a Moment load as the hangar turns.

Initially, I placed all of the above relevant forces on the skateboard, using standard calculations for force. I assumed that the mass of the skateboard and the rider was 80 kg, the velocity of the skateboard was 10 m/s, and the skateboard turned with a 2 m radius. I calculated an impact force of around 2000 N. With the complete forces placed on the skateboard, the generative design would not converge for the aluminum or nylon outcomes. I had restricted the space the hangers could occupy, and the nylon and aluminum were not strong enough to handle the simulated forces. I overestimated the forces on the truck hanger because the skateboard does not absorb the complete impact force. I reduced the simulated loads to consider the realistic strength of the nylon and aluminum materials. 

The structural constraint was placed on the ball end of the pivot joint. Placing the structural constraints on the pivot joint signals that the ball end is stationary. The forces simulated on the hanger reference this structural constraint, so material is generated such that the rest of the model moves in relation to the pivot joint. As a result, no forces can be placed on the pivot joint, and it is assumed that the rest of the hanger will support the force on the pivot joint. 

## Completed Longboard Assembly
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a4634cb8bd4f604bdb?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a445fb9204ad7cebf8?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

## Generative Design Outcomes
In order for the nylon outcome to converge at a safety factor of 1.6, the loads acting on the truck hanger were adjusted. The weight of the rider acting on the king pin bearing was reduced from 784 N to 200 N. Each shearing force acting on the ends of the center axle was reduced from 250 N to 100 N. These loads do not accurately represent the true loads acting on the truck hanger, although they were required to converge the design because nylon is a weaker material than aluminum. Despite the adjustment of the loads, the resin outcome is much bulkier than the aluminum outcome, as more resin is needed to achieve similar support. For example, the resin encroaches over the belt path, while the aluminum does not. The resin tightly fits around the motor, while the aluminum has some clearance. In the resin outcome, generative design is using all available space to strengthen the outcome.

Generative design is useful for modelling components whose loads are well known, such that generative design reduces the number of components used in the assembly. Generative design does not reduce the amount of time it takes to design a part, as multiple generative design simulations are time consuming. The parts crafted through generative design are highly complex, which may reduce their printability in restricted additive manufacturing techniques. These parts may need to be further altered after generative design to improve printability or aesthetics, which defeats the purpose of using generative design in the first place. Generative design would be most useful in applications that require lightweight, complex parts, such as the aerospace and automotive industries. 

## Image Gallery
<img src="https://github.com/rhurwitz33/rhurwitz33.github.io/blob/main/assets/img/TruckFront.jpg?raw=true" width="23%"> <img src="https://github.com/rhurwitz33/rhurwitz33.github.io/blob/main/assets/img/TruckIso.jpg?raw=true" width="23%">
<img src="https://github.com/rhurwitz33/rhurwitz33.github.io/blob/main/assets/img/MotorTop.jpg?raw=true" width="23%"> <img src="https://github.com/rhurwitz33/rhurwitz33.github.io/blob/main/assets/img/TruckBase2.jpg?raw=true" width="23%">

## Design Function
<iframe src="https://giphy.com/embed/lQ0o7Wx6PmHKS5qJbT" width="480" height="269" style="" frameBorder="0" class="giphy-embed" allowFullScreen></iframe><p><a href="https://giphy.com/gifs/lQ0o7Wx6PmHKS5qJbT">via GIPHY</a></p>
<iframe src="https://giphy.com/embed/WQzt0TR2c1PWyUy3KU" width="480" height="269" style="" frameBorder="0" class="giphy-embed" allowFullScreen></iframe><p><a href="https://giphy.com/gifs/WQzt0TR2c1PWyUy3KU">via GIPHY</a></p>

## Works Cited
Metal Additive Manufacturing in the aerospace sector. Metal Additive Manufacturing https://www.metal-am.com/articles/metal-am-in-the-aerospace-sector-from-early-successes-to-the-transformation-of-an-industry/ (2023).
Dhurjad, S., Shaikh, A. & Chinchanikar, S. Generative design for additive manufacturing (G-DFAM): An explorative study of aerospace brackets. in AIP Conference Proceedings doi:10.1063/5.0113328.
 Manufacturing Milestone: 30,000 Additive Fuel Nozzles | GE Aerospace News. GE Aerospace https://www.geaerospace.com/news/articles/manufacturing/manufacturing-milestone-30000-additive-fuel-nozzles (2018).


