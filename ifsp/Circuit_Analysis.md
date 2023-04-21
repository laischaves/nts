# Circuit Analysis

## Equations
*Parallel Resistance*:

$1 / R_{tot} = 1/R1 + 1/R2 ....$

*Voltage Divider*:

$V_{out} = V-{in} \cdot R2 / R1 + R2$ |
Voltage at Middle of divider

*LED Resistor*:

$R = V_s - V_f / I_f$ |
Vs = Source Voltage, Vf = LED Forward Voltage, If = LED desired Current

*Capacitor Parallel*:

$C_{tot} = C1 + C2 + C3....$ |
Total values are additive

*Capacitor Series*:

$C_{tot} = 1/C1 + 1/C2 + 1/C3...$

*Power*:

$P = I^2 \cdot R$

*Ohms Law (Voltage)*:

$V = I \cdot R$

*Ohms Law (Resistance)*:

$R = V / I$

*Ohms Law (Current)*:

$I = V / R$

*Current through a conductor*:

$L:= \frac{\Phi_B}{I}$

*Inductor voltage*:

$v = L \frac{di}{dt}$

$i = \frac{1}{L}\int^T_0 vdt + i_0$

---
## Kirchhoff's Laws

From Wikipedia, the free encyclopedia:

> "Kirchhoff's circuit laws are two equalities that deal with the current and potential difference
(commonly known as voltage) in the lumped element model of electrical circuits. They were first
described in 1845 by German physicist Gustav Kirchhoff. This generalized the work of Georg Ohm
and preceded the work of James Clerk Maxwell. Widely used in electrical engineering, they are
also called Kirchhoff's rules or simply Kirchhoff's laws. These laws can be applied in time and
frequency domains and form the basis for network analysis.
>
> Both of Kirchhoff's laws can be understood as corollaries of Maxwell's equations in the
low-frequency limit. They are accurate for DC circuits, and for AC circuits at frequencies
where the wavelengths of electromagnetic radiation are very large compared to the circuits."

### Kirchhoff's Current Law
A.k.a: the first law, the point rule, junction rule or nodal rule: _For any node (junction),
the sum of the currents flowing **into** that node is equal to the sum of the currents
flowing **out** of that node; and vice-versa._

>  The algebraic sum of currents in a network of conductors meeting at a point is zero.
> $$\sum^n_{k=1}{I_k}=0$$


### Kirchhoff's Voltage Law
A.k.a.: the second law, loop or mesh rule: *The directed sum of the potential differences
(voltages) around any closed loop is **zero**.*

> $$\sum^n_{k=1}V_k=0$$


**Ohm's Law:**
Ohm's law states that the current flowing through a conductor is directly proportional to the voltage applied across it, and inversely proportional to its resistance.

Ohm's Law Equation:
$V = IR$

where V is the voltage in volts (V), I is the current in amperes (A), and R is the resistance in ohms ($\Omega$).

**Series and Parallel Circuits:**
Series and parallel circuits are two basic types of circuits.

Series Circuits:
In a series circuit, the components are connected in a sequence, so that the same current flows through each component.

Total Resistance in a Series Circuit:
$R_{total} = R_1 + R_2 + \dots + R_n$

where $R_{total}$ is the total resistance, and $R_1$, $R_2$, $\dots$, $R_n$ are the resistances of the individual components.

Parallel Circuits:
In a parallel circuit, the components are connected in branches, so that the voltage across each component is the same, and the total current is the sum of the currents through each branch.

Total Resistance in a Parallel Circuit:
$\frac{1}{R_{total}} = \frac{1}{R_1} + \frac{1}{R_2} + \dots + \frac{1}{R_n}$

where $R_{total}$ is the total resistance, and $R_1$, $R_2$, $\dots$, $R_n$ are the resistances of the individual components.

**Capacitors and Inductors:**
Capacitors and inductors are two common circuit elements.

Capacitors:
A capacitor is a device that stores electrical energy in an electric field.

Capacitance Equation:
$C = \frac{Q}{V}$

where C is the capacitance in farads (F), Q is the charge in coulombs (C), and V is the voltage in volts (V).

Inductors:
An inductor is a device that stores electrical energy in a magnetic field.

Inductance Equation:
$L = \frac{\phi}{I}$

where L is the inductance in henries (H), $\phi$ is the magnetic flux in webers (Wb), and I is the current in amperes (A).
