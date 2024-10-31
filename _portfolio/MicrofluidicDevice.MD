---
title: "Pinch Flow Fractionation Microfluidic Device"
excerpt: "Sorts particles by size using laminar flow."
header:
  image: assets/img/ufluidicdevice.jpg
  teaser: assets/img/ufluidicdevice.jpg
   
---

# Sorting Geometries

Two inlet flows, one containing particles and the other pure liquid, converge at an interface in a small pinched segment. Larger particles flow further from the wall in a laminar segment compared to smaller particles due to the difference in flow rates.To achieve particle separation, particles must flow through a pinched segment with a small width and a broadened segment with a large width. The separation between particles in the laminar flow of the pinched segment is amplified as the particles flow through the broadened segment due to the sudden difference in channel width. The particles are collected in outlet streams with similar widths to avoid inconsistent flow rates out of the device, which would disturb the steady flow of particles, and therefore could cause mixing of particles in the broadened segment. 

The final location of each particle depends on the particle diameter (Dp), the width of the pinched segment (wp), and the width of the broadened segment (wB). The model developed by Yamada, Y = (wp-Dp/2) (wB/wp), was used to determine the dimensions for this device [1]. The two particle sizes used in this device were 165 and 550 um. The width of the broadened segment was set to the maximum width for this device, 18.0 mm. The width of the pinched segment was set to the minimum width, 1 mm, to prevent particle clogging. Therefore, the model predicts a final location of 13050 um for the 550 um particle, and 16515 um for the 165 um particle. The highest outlet flow collects particles between y positions of 12125 and 18000 um. In order to make this design conducive to efficient sorting, a fourth outlet would need to be added to further separate particles while maintaining equally sized outlet streams.  

# Applications and Challenges of Sorting

This microfluidic sorter can be used to continuously separate particles on the micrometer scale without requiring external energy. The geometry of the sorter limits its applications, as the size of particles must be distinct enough to separate between three output flows. This sorter was designed for particles 600 um or smaller, to avoid particles clogging the pinched region. With three outlet flow sections which are similar in size, this device can not sort between particles smaller than 650 um, as the model predicts that both particle types would flow into the top flow section. To separate large particles, a sorter would need to be designed with a larger width broadened segment and more outlet flow streams. Sorters with a variety of applications would need to be redesigned to separate specific particle sizes. 

A similarly designed microfluidic sorter of a smaller scale could be used to sort cells [2]. [3]   



# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a47b8a186735a857aa?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Device Mold
![Microfluidic device resin mold](https://github.com/rhurwitz33/rhurwitz33.github.io/blob/main/assets/img/ufluidicmold1.jpg)

# Device Construction
Instructions for how to go from the 3D printed mold to the final device
Print and cure mold. 
Parylene device. 
Cast PDMS. 
Plasma bond glass slide. 
Why are resin-printed molds coated with parylene prior to casting the 
PDMS? 

# Final Device
![Microfluidic device](https://github.com/rhurwitz33/rhurwitz33.github.io/blob/main/assets/img/ufluidicdevice.jpg)
[![Pinch Flow Fractionation](https://img.youtube.com/vi/--6JoKgJHCo/0.jpg)](https://www.youtube.com/watch?v=--6JoKgJHCo)

# Works Cited
1. Yamada, M., Nakashima, M. & Seki, M. Pinched Flow Fractionation:  Continuous Size Separation of Particles Utilizing a Laminar Flow Profile in a Pinched Microchannel. Anal. Chem. 76, 5465–5471 (2004).
2. Suresh, S. et al. Connections between single-cell biomechanics and human disease states: gastrointestinal cancer and malaria. Acta Biomaterialia 1, 15–30 (2005).
3. Manz, A. et al. Planar chips technology for miniaturization and integration of separation techniques into monitoring systems: Capillary electrophoresis on a chip. Journal of Chromatography A 593, 253–258 (1992).


