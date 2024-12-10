# Circuit Analysis

## Equations
*Parallel Resistance*:

$1 / R_{tot} = 1/R1 + 1/R2 ....$

*Voltage Divider*:

$V_{out} = V_{in} \cdot \frac{R_x}{R_{eq}}$ |
Voltage at resistor x

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

Inductance is a property of an electrical circuit component that opposes changes in current flow and is measured in henries (H). It can be defined mathematically as the ratio of the magnetic flux to the current flowing through a circuit:

$\begin{equation} L = \frac{\Phi}{I} \end{equation}$

where L is inductance in henries, $\Phi$ is the magnetic flux in webers, and I is the current in amperes.

The derivative of inductance with respect to time is known as the rate of change of current, and is given by:

$\begin{equation} \frac{dL}{dt} = \frac{d}{dt} \left(\frac{\Phi}{I}\right) = \frac{1}{I}\frac{d\Phi}{dt} - \frac{\Phi}{I^2}\frac{dI}{dt} \end{equation}$

Capacitance, on the other hand, is a property of an electrical circuit component that stores electrical energy in an electric field and is measured in farads (F). It can be defined mathematically as the ratio of the charge stored on a capacitor to the voltage across it:

$\begin{equation} C = \frac{Q}{V} \end{equation}$

where C is capacitance in farads, Q is charge in coulombs, and V is voltage in volts.

The derivative of capacitance with respect to time is known as the rate of change of voltage, and is given by:

$\begin{equation} \frac{dC}{dt} = \frac{d}{dt} \left(\frac{Q}{V}\right) = -\frac{Q}{V^2}\frac{dV}{dt} + \frac{1}{V}\frac{dQ}{dt} \end{equation}$

where the negative sign in the first term arises due to the fact that the charge on a capacitor is inversely proportional to the voltage across it.