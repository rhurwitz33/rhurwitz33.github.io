---
title: "Multi-Material Pliers"
excerpt: "Grips and picks up through-hole resistors."
header:
  image: assets/img/pliersiso.jpg
  teaser: assets/img/pliersiso.jpg
   
---

## Applications of Print-in-Place Multi-Material Parts
Through-hole resistors are challenging to move by hand due to their small size. This project aims to produce multi-material pliers for efficient movement of through-hole resistors. The pliers must contain a flexible spring component, such that the movement of the handles shears the spring component, closing the plier jaws. Multi-material printing allows for printing the spring component precisely in the rigid pliers, without requiring a press fit or separate printers. 

Print-in-place has been used to precisely construct ion mobility spectrometry drift tubes with fused deposition modeling. Drift tubes identify ions by their reduced ion mobility, which depends on how quickly the ions move through a gas over a particular drift length. Although 3D printing is helpful to reduce manufacturing time and costs, the drift tube length must be precise for spectrometry to be performed accurately. Therefore, print-in-place has been used to construct a multi-material drift tube with layers of insulating, conducting, and soluble materials [1].

Linking thermoplastic polyurethane and PLA in print-in-place was compared to paper origami in one design of robot legs. Soft, flexible materials have been used in robots to improve their safety and human interactions, but the soft materials are challenging to interface with rigid materials due to inconsistent dimensionality when assembly separate parts. Print-in-place was used to construct multiple flexible joints in the robot legs without requiring rigid connections [2].
   
Materials with similar surface energies, intermolecular forces, shrinkage and cooling rates, and mechanical properties are more likely to bond together in multi-material printing. PLA and TPU, the two materials used in this project, do not bond together well due to their different mechanical properties. As a result, material connections must be constructed with joints.  

## CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a47a05bc57c57b4090?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

## Pliers Design and Rapid Prototyping Process
Multi-material pliers were printed with a flexible TPU 95 spring component in the center and rigid PLA handles and jaws for rapid prototyping. Dovetail connections were used to easily assemble the handles and jaws with a press fit onto the spring component. The PLA handles were designed to close the jaws completely with the movement of one hand. 

The spring component compresses as the handles are moved, so the spring must have sparse, flexible infill while remaining durable. The spring component has 4 perimeter layers to ensure sturdy connections with the handles and jaws. The depth of the spring component had to match the depth of the handles and jaws to ensure a press fit. Initially, the spring component was printed with 5.5% rectilinear infill, which was not sufficient for a strong, durable component. The spring component was printed at a fourth the depth of the handles and jaws. Therefore, the spring component was redesigned with 7.5% rectilinear infill in SuperSlicer and the same depth as the jaws and handles. The spring component was printed on the Prusa i3.

The handles and jaws were printed on the Voron 300. The first iteration of rigid components was printed with a 0.6 mm nozzle head, which was not sufficient to achieve the dimensionality required for the press fit. The dovetail connections betweens the handles, jaws, and flexible component were loose. Therefore, the dimensions of the dovetail connections were adjusted slightly to ensure a press fit, and the rigid components were printed with a 0.4 mm nozzle.   

| Product Specifications |          |
|------------------------|----------|
| Jaw length             | 60 mm    |
| Jaw capacity           | 5.383 mm |
| Jaw depth              | 8 mm     |
| Spring component width | 31.3 mm  |
| Handle length          | 95.3 mm  |

## Print Settings
|	| Prusa i3    | Voron 300 - 0.6 mm nozzle | Voron 300 - 0.4 mm nozzle |
|---------------------|-------------|---------------------------|---------------------------|
| Material            | TPU 95      | PLA                       | PLA                       |
| Bottom Solid Layers | 0           | 3                         | 3                         |
| Perimeters count    | 4           | 3                         | 3                         |
| Top solid layers    | 0           | 3                         | 3                         |
| Base layer height   | 0.2 mm      | 0.3 mm                    | 0.2 mm                    |
| Fill density        | 7.5%        | 20%                       | 20%                       |
| Sparse fill pattern | Rectilinear | Rectilinear               | Rectilinear               |


## Image Gallery
<img src="https://github.com/rhurwitz33/rhurwitz33.github.io/blob/main/assets/img/plierhandles.jpg?raw=true" width="23%"></img> <img src="https://github.com/rhurwitz33/rhurwitz33.github.io/blob/main/assets/img/plierjaws.jpg?raw=true" width="23%"></img> <img src="https://github.com/rhurwitz33/rhurwitz33.github.io/blob/main/assets/img/pliersspring.jpg?raw=true" width="23%"></img> <img src="https://github.com/rhurwitz33/rhurwitz33.github.io/blob/main/assets/img/pliersiso.jpg?raw=true" width="23%"></img> <img 


## Working Pliers
<iframe src="https://giphy.com/embed/ysJ7p5gBbMAyuVxpMP" width="310" height="480" style="" frameBorder="0" class="giphy-embed" allowFullScreen></iframe><p><a href="https://giphy.com/gifs/ysJ7p5gBbMAyuVxpMP">via GIPHY</a></p>

## Works Cited
1. Hauck, B. C., Ruprecht, B. R. & Riley, P. C. Accurate and on-demand chemical sensors: A print-in-place ion mobility spectrometer. Sensors and Actuators B: Chemical 362, 131791 (2022).

2. Saan Cern, Y. & Sheng Ze, Y. The Design of a New 3D Print-in-place Soft Four-Legged Robots with Artificial Intelligence. Jurnal Kejuruteraan 35, 717–733 (2023).

