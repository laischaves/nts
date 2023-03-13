### Quick definitions
$$i=\sqrt{-1}$$

### Quick examples
**Find the square root of -4:**
$$\sqrt{-4} = \sqrt{4 \times (-1)} = \sqrt{4}\cdot \sqrt{-1} = 2\sqrt{-1} = 2i$$

**Solve the equation:**
$$x^2 + x + 1 = 0$$
$$\Delta = -3; x = \frac{-1 \pm \sqrt{-3}}{2}$$
$$\sqrt{-3} = \sqrt{3}\cdot\sqrt{-1} = i\sqrt{3}$$

**Powers of i**
$$i^1 = 1$$
$$i^2 = -1$$
$$i^3 = i^2\cdot i = -1\cdot i = -i$$
$$i^4 = -i\cdot i = -i^2 = 1$$
$$i^5 = 1 \cdot i = i$$
$$i^6 = i \cdot i = i^2 = -1$$
$$i^7 = 1$$

**Find the power $i^{22}$**
$$22\div 4 = \mathbf{2}\frac{20}{4} = 5.5$$
$2$ is left out number of the division, so we do $i^2$
$$i^2 = -1 = i^{22}$$


### Definitions

> We define a complex number such as a point with two coordinates in the Euclidean plane
> as an ordered pair of two real numbers, $(a,b)$ [...] Similarly, a complex variable is an ordered
> pair of two real variables, $z \equiv (x,y)$ -- ISBN: 0-12-059877-9 Chapter 6, page 320.

The ordering is significant as _x_ is called the **real part** of _z_ and _y_ the **imaginary
part** of _z_; that being said, _(a,b)_ isn't equal to _(b,a)_ generally.

A real number could then be written as _(x,0)_, and the imaginary unit to be $i\equiv(0,1)$.

*Example*: The complex number $\frac{1}{2}(-1 \pm i\sqrt{3})$ could be written as $z = (-\frac{1}{2},\pm\sqrt{3})$, in which we ommit the $i$ symbol and simplify the real part of the expression.

The plot created by mapping $z\equiv (x,y)$ is called a _Complex Plane_, or an _Argand Diagram_. 

> All our complex variable analyses can now be developed in terms of ordered pairs [as computers do] of numbers _(a,b)_, variables _(x,y)_ and functions _(u(x,y),v(x,y))_ -- ISBN: 0-12-059877-9 Chapter 6, page 321

**Addition rules**
Sum/subtract imaginary parts, then real parts:
$$z=3+4i\space\space|\space\space w=-1+2i$$
$$z+w= 3+(-1)\space\space + \space\space4i+2i$$

**Addition in terms of Cartesian components**
$$z_1+z_2=(x_1,y_1)+(x_2,y_2)=(x_1+x_2, y_1+y_2)=z_2+z_1$$


**Multiplication rules**
Use distributive rules, remember $i^2=-1$:

_Given $z=2+3i$ and $w=3-2i$_
$$z\cdot w = (2+3i)(3-2i)$$
$$z \cdot w = 6-4i+9i-6i^2 = 6+5i+6 = 12+5i$$

**Multiplication in terms of Cartesian components**
$$z_1 z_2 = (x_1,y_1)(x_2,y_2) = (x_1x_2 - y_1y_2,\space x_1xy_2+x_2y_1)$$ 

_Given $i\cdot i$ or $i^2$:_
$$(0,1)(0_1)=(0\cdot 1 - 1\cdot 1,\space 0\cdot 1 + 0\cdot 1) = (-1, 0)$$\
Therefore $i^2 = -1$


**Division rules**
_Complex conjugate_, the number with an equal real part and an imaginary part equal in magnitude put opposite in sign, so both the complex number and its conjugate are mirror images of each other.
$$z=a+bi \rightarrow \overline{z}=a-bi$$
$$z\overline{z}=(x+iy)(x-iy)=x^2+y^2=r^2$$
$$(z\overline{z})^{\frac{1}{2}} = |z|$$

Given $z=2+3i$, calculate $z\cdot\overline{z}$
$$(2+3i)\cdot(2-3i)=4-6i+6i-9i^2=4-9i^2=4-9(-1)=13$$

Knowing the complex conjugate allows for the following division method:
$$\frac{z}{w}=\frac{z}{w}\cdot\frac{\overline{w}}{\overline{w}}$$

**Polar coordinates**
Considering: $x=r\cos\theta$, $y=r\sin\theta$ and $z=r(\cos\theta + i\sin\theta)$ with $r$ being $r = |z|$, the angle $\theta$ is labeled the _argument_ or _phase_ of $z$
That's because of the rules of sines and cosines: $\sin\theta=\frac{o}{h}$ and $\cos\theta=\frac{a}{o}$, and, considering an Argand Diagram, we can call $x$ the adjacent side of  the complex number vector, $y$ the opposite side and it's module $|z|=r$ the hipothenuse.






#### Book
- Essential Mathematical Methods for Physicists, page 323

