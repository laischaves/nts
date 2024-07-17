---
tags:
  - mathematics
  - theory
---
### Definition
> From **Wikipedia**, the free encyclopedia
>> In mathematics, the **polar coordinate system** is a two-dimensional coordinate systemin which each point on a planeis determined by a distance from a reference point and an angle from a reference direction. The reference point (analogous to the origin of a Cartesian coordinate system is called the _pole_, and the ray from the pole in the reference direction is the _polar axis_. The distance from the pole is called the _radial coordinate_, _radial distance_ or simply _radius_, and the angle is called the _angular coordinate_, _polar angle_, or _azimuth_. Angles in polar notation are generally expressed in either _degrees_ or radians (2π rad being equal to 360°).

Considering a complex number $Z$:

It's rectangular form will be: $Z = a + bi$ , while it's *polar form* will be: $Z=r[\cos\theta+i\sin\theta]$.

Graphing this definition gives us the following in rectangular form:
![[PolarForm_Img1.png]]

And the following in polar form:
![[PolarForm_Img2.png]]

Knowing that the *absolute value of a complex number* is:
$$|Z| = \sqrt{a^2+b^2}$$
In polar form, $r$ is the same: 
$$r = \sqrt{a^2+b^2}$$
So this tells us that given $a$ and $b$ in a rectangular form graph, the hypotenuse will be the absolute value of $Z$, and the same goes for $r$:
![[PolarForm_Img3.png]]![[PolarForm_Img4.png]]

Since these equations are equivalent, we also know that:
$$a = r\cos\theta \space\space\text{and}\space\space b = r\sin\theta$$

### Operations with numbers in polar form
#### Conversion from rectangular to polar
Knowing $a$ and $b$, you can get $\theta$ with the following equation:
$$\theta = \tan^{-1}(\frac{a}{b})$$

#### Product
Considering $Z_1 = a+bi$ and $Z_2 = a+bi$, the product will simply be $(a+bi)(a+bi)$

Considering $Z_1=r_1[\cos\theta_1+i\sin\theta_1]$ and $Z_2=r_2[\cos\theta_2+i\sin\theta_2]$:
$$Z_1\cdot Z_2 = r_1r_2[\cos(\theta_1+\theta_2)+i\sin(\theta_1+theta_2)]$$

#### Ratio
$$\frac{Z_1}{Z_2}=\frac{r_1}{r_2}[\cos(\theta_1 - \theta_2)+i\sin(\theta_1 - \theta_2)]$$

#### Power according to De Moivre's Theorem
$$Z^n = [r(\cos\theta+i\sin\theta)]^2$$
$$ Z^n = r^n [\cos(n\cdot\theta)+i\sin(n\cdot\theta)]$$

#### Roots according to De Moivre's Theorem
$$Z_k =\sqrt[n]{r}\cdot[\cos(\frac{\theta + 2\pi k}{n})+i\sin(\frac{\theta + 2\pi k}{n})]$$
Where $k$ is an *integer*.