# CALCULUS REVIEWS


## Laplace Transform
- What is it for?
> Convert an differential equation into an _algebraic equation_.
- How does it work?
> The transform receives a function $f(t)$ as an input and
> outputs _another function_ $F(s)$.
- How is it defined?
> $$\mathcal{L} \{f(t)\}=F(s)$$
> $$F(s) = \int^{\infty}_{0} e^{-st}f(t)dt$$

#### Examples
1. $\mathcal{L} \{e^{at}\}, t\geq 0$ :

$$F(s)=\int^{0}_{\infty} e^{-st}\space e^{at}\space dt$$
$$F(s)=\int^{0}_{\infty} e^{-st+at} \space dt$$
$$F(s)=\int^{0}_{\infty} e^{t(a-s)} \space dt$$
$$\text{Indefinite integral;}$$
$$F(s)= \left.\frac{e^{t(a-s)}}{a-s}\right|^{\infty}_{0}$$
$$\text{it converges at 0 for } s>a: 0-\frac{1}{a-s}=\frac{1}{s-a}$$
$$\text{diverges for } s\leq a$$










