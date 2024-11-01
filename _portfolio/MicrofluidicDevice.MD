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

A similarly designed microfluidic sorter of a smaller scale could be used to sort red blood cells that have been inflected with malaria, as the structure of the red blood cell changes with the stage of infection. The elastic moduli of infected cells increases compared to healthy cells, which can be measured with laminar shear flow [2]. Since pinch flow fractionation relies on separation of particles through laminar shear flow, the cells should separate by their elastic moduli. Chemical analysis could also benefit from pinch flow fractionation. Photolithography has been used to construct devices that rely on capillaries to separate fluorescent dyes for chromatography [3]. Stereolithography of resin-printed molds presents an economic, time-efficient alternative to photolithography. This casted microfluidic device could aid in chemical analysis by separating dye particles according to their size.

# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a47b8a186735a857aa?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Device Mold
![Microfluidic device resin mold](https://github.com/rhurwitz33/rhurwitz33.github.io/blob/main/assets/img/ufluidicmold1.jpg?raw=true)

# Device Construction

The mold of this microfluidic device was designed in Fusion 360 (Autodesk). Stereolithography was used to print this mold out of clear resin on a SLA printer (Formlabs). In stereolithography, coherent UV light precisely cures resin by activating photoinitiators, which start a reaction cascade to polymerize the components of the resin. As a result, the interior of the 3D printed part will not be fully cured after SLA printing, as fully curing the resin during printing would greatly increase the print time. Therefore, the part must be post-cured after SLA printing. After the device dried, debris was removed through air blasting and post-curing was performed at room temperature for 10 seconds. SLA printing requires support material to prevent warping and ensure dimensionality. Support material was removed by hand after post-curing.

Researchers have observed that PDMS will not cure when it is casted in a resin mold because the photo-initiators in the resin leach into the PDMS. The photo-initiators prevent catalyst from curing PDMS [4]. To prevent photo-initiators from leaching out of the resin, the resin mold was coated with parylene. PDMS devices created by coating molds with parylene can be made defect-free and support cell cultures, unlike other methods, which lead to warping and reduce dimensionality [5]. After the molds were coating with parylene, the PDMS was casted on the mold, and a glass slide was plasma bonded to the bottom of the mold. 

# Final Device
![Microfluidic device](https://github.com/rhurwitz33/rhurwitz33.github.io/blob/main/assets/img/ufluidicdevice.jpg?raw=true)
[![Pinch Flow Fractionation](https://img.youtube.com/vi/--6JoKgJHCo/0.jpg)](https://www.youtube.com/watch?v=--6JoKgJHCo)

# Works Cited
1. Yamada, M., Nakashima, M. & Seki, M. Pinched Flow Fractionation:  Continuous Size Separation of Particles Utilizing a Laminar Flow Profile in a Pinched Microchannel. Anal. Chem. 76, 5465–5471 (2004).
2. Suresh, S. et al. Connections between single-cell biomechanics and human disease states: gastrointestinal cancer and malaria. Acta Biomaterialia 1, 15–30 (2005).
3. Manz, A. et al. Planar chips technology for miniaturization and integration of separation techniques into monitoring systems: Capillary electrophoresis on a chip. Journal of Chromatography A 593, 253–258 (1992).
4. Venzac, B. et al. PDMS Curing Inhibition on 3D-Printed Molds: Why? Also, How to Avoid It? Anal. Chem. 93, 7180–7187 (2021).
5. O’Grady, B. J. et al. Rapid prototyping of cell culture microdevices using parylene-coated 3D prints. Lab Chip 21, 4814–4822 (2021).
