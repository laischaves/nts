---
title: Robotics Course 01: Aerial Robotics
date: 2022-03-06
draft: true
---

## Fundamentals or things to know

 **Dynamical System**: A system where the effects of
input actions don't occur immediately.
> Those systems are described by **states**:
> > a collection of variables that characterize (completely)
> > the motion of a system
> > > x(t) gives the values of states(time)
> _Order of the system_: highest derivative in the equations


The UAV's (Unmanned Aerial Vehicles) market is growing,
with an industry worth more than $10 Billion.

- Military
- Civilian (comercial)
- Civilian (private)

==Drones are remotely controled==

#### Rotor crafts:
- Helicopters
- Ducted fan
- Co-axial
- Quadrotor
- Hexrotor


##### Quadrotor
- Giroscopic moment
Has 4 independently controlled rotors,
2 rotating clockwise, 2 anticlockwise; the speed of each helps
define the position and orientation of the robot

The whole motion of the vehicle can be complicated.

The robot has six degrees of freedom;
- It can move in the XYZ plane, and it can rotate.
- It can perform 3 translational movements and 3
rotational movements.




## Key Components for Automonomous Flight

1. State Estimation
 "Obtain reliable estimates of position and velocity"
In lab:
 - External motion capture cameras;
 - Reflective markers;
Outside of a lab:
- GPS; Communication;
- (Varied) Sensors;
- SLAM: (Simultaneous Localization and Mapping)
> Estimates the location of features in the environments
> Estimates the position and orientation of the robot
> with respect to the environment



2. Control
3. Mapping
4. Planning


### Things to be organized
**IMU**: A device that measures and reports a body's specific force,
angular rate and sometimes orientation of the body.
It combines accelerometers and gyroscopes (sometimes magnetometers).



# Basic Mechanics

## Rotor Physics

#### Unit and symbol list:
rotor speed ($\omega$): rad/s or RPM

thrust force (F): newton

drag moment (M): newton meters Nm

motor torque ($\tau$) : newton meter Nm

resistive power loss (P) : watt W

$K_{M}$: motor constant or motor size constant $\arrow K_{M}
=\frac{\tau}{\sqrt{P}}$: newton meters per square root watt
($N\cdot m / \sqrt{W}$)

motor torque _constant_ ($K_{T}$) : newton meter per ampere
($Nm/A$)

resistance (R) : ohm $\Omega$

back EMF ($E_{b}$

field flux $\phi$

#### Equation list:

$$

K_{M} = \frac{K_{T} I}{\sqrt{P}}= \frac{K_{T} I}{\sqrt{I^2 R}} =
\frac{K_{T}}{\sqrt{R}} \\

K_{\omega} = \frac{E_{b}}{\phi\omega} \\

K_{T} = \frac{\tau}{I_{a}} = \frac{60}{2\pi K_{v(RPM)}} =
\frac{1}{K_{v(SI)}} \\

I_{a} = \frac{\tau}{K_{T}}\\


\\ \space
\\ \space

\\
M = k_{M} \omega^2 \\

F = k_{F} \omega^2 \\
F_{i} = k_{F} \omega^2_{i} \\

W_{0} = \frac{1}{4} mg\\
\\
\text{Motor speeds: } k_{F} \omega^2_{i} = \frac{1}{4}mg \\

\text{Motor torques: } \tau_{i} = k_{M} \omega^2_{i}\\

\\ \space

\\

\text{Resultants: }\\

F = F_{1} + F_{2} + F_{3} + F_{4} - mg\space a_{3} \\

M = r_{1} \times F_{1} + r_{2} \times F_{2} + r_{3} \times F_{3} +

r_{4} \times F_{4} + M_{1} + M_{2} + M_{3} + M_{4} \\

\\ \space

\\

\text{At equilibrium, that is, hovering: } \sum^4_{i=1}k_{F}w^2_{i}m\space g=0 \\

\text{accelerating up or down: } \sum^4_{i=1}k_{F}w^2_{i}m\space g=m\space a
$$

![week one 7th slide](penn_robotics/img_001.png "week 1 7th slide")




STOPPED AT : SLIDE 57

---
### Terms:
- RPV: Remotely Piloted Vehicles
- UAV: Unmanned Aerial Vehicle
- Yaw: Steer
- SLAM: Simultaneous Localization and Mapping
- IMU: Inertial Mesurement Unite
