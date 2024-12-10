# Per-Unit Systems

Used in power system analysis, a **per-unit system** is
the expression of a quantity as a fraction of a determined base
unit quatity. This is used for simplifying calculations and
"quantities expressed as per-unit do not change when they are
referred from one side of a transformer to the other".
[(WIKIPEDIA)](https://en.wikipedia.org/w/index.php?title=Per-unit_system&oldid=1063621632)

A conversion from P.U. to the original quantities (volts, ohms,
ampères), requires knowledge of the base referenced.

"A per-unit system provides units for power, voltage, current,
impedance, and admittance. With the exception of impedance and
admittance, any two units are independent and can be selected
as base values; power and voltage are typically chosen."
[(WIKIPEDIA)](https://en.wikipedia.org/w/index.php?title=Per-unit_system&oldid=1063621632)

For defining a base quantity for transformers, it's ideal to:
- Set the base power value as the same for the whole system.
- Set the ratio for voltage base as equal to that of the
transformer voltage, for either sides.

Example:  consider an one phase power transmission system,
with power of order 500 MW and nominal voltage of 138 kV.
Selecting an arbitrary $S_{base} = 500MVA$ and  using the nominal
voltage as the base $V_{base}$:

$$\begin{aligned}
P_{base} &= 1 pu = 500 MVA \\
V_{base} &= 1 pu = 138 kV \\
I_{base} &= \frac{S_{base}}{V_{base}} = 1 pu \\
I_{base} &= \frac{500MVA}{138kV} \approx 3.62\cdot 10^3 A\\
\end{aligned}
$$

Other units can be derived from power and voltage by the following
equations:
$$
\begin{aligned}
P &= S\cos(\phi) \\
Q &= S \sin(\phi) \\
V &= IZ, \space Z = R +jX = Z\cos(\phi) + jZ\sin(\phi)\\
\\
Z_{base} &= \frac{V_{base}}{I_{base}}=\frac{V^2_{base}}{S_{base}} = 1 pu\\
Y_{base} &= 1/Z_{base} = 1 pu
\end{aligned}
$$

And for three-phase systems power and voltage remain the same,
but the derived units change a bit:
$$\begin{aligned}
S_{base} &= \sqrt{3}V_{base}I_{base} = 1 pu\\
I_{base} &= \frac{S_{base}}{V_{base}\cdot \sqrt{3}} = 1 pu\\
Z_{base} &= \frac{V_{base}}{I_{base\cdot\sqrt{3}}}=\frac{V^2l_{base}}{S_{base}} = 1 pu \\
Y_{base} &= 1/Z_{base} = 1 pu
\end{aligned}$$

The equations $P = S\cos(\phi)$ and $Q = S \sin(\phi)$ still hold.

