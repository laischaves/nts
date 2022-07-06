
## Laplace Transform
- What is it for ?
> Convert an differential equation into an _algebraic equation_.
- How does it work?
> The transform receives a function $f(t)$ as an input and
> outputs _another function_ $F(s)$.
- How is it defined?
> Suppose that f(t) is a *piecewise* continuous function, the Laplace transform
> is defined as:
> $$\mathcal{L} \{f(t)\}=F(s)$$
> $$F(s) = \int^{\infty}_{0} e^{-st}f(t)dt$$
- *Piecewise continuous function*:
> A piecewise continuous function is a function that has a finite
> number of breaks in it and doesn’t blow up to infinity anywhere.

The integral form of the transform is an improper integral and improper
[[integrals]] must be solved by converting it to a limit.

Example:
> $$\int^\infty_0 e^{ct} dt = \lim_{n\to \infty}\int^n e^{ct} dt$$
> Integrate, then evaluate the limit:
> $$\lim_{n\to \infty}(\frac{1}{c}e^{ct})\Big{|}^n_0$$
> $$\lim_{n\to \infty}(\frac{1}{c}e^{cn}-\frac{1}{c})$$

We should make sure that the integral converges (i.e. the limit
exists and is finite). The integral will converge if f(t) has
an exponential order (f(t) cannot be too big), otherwise it will diverge.

So, in this example, the integral will only converge if c < 0.
> $$\int^\infty_0 e^{ct}= -\frac{1}{c}, \text{given } c<0$$


#### Examples
1. $\mathcal{L} \{e^{at}\}, t\geq 0$ :

$$F(s)=\int^{0}_{\infty} e^{-st}\space e^{at}\space dt$$
$$F(s)=\int^{0}_{\infty} e^{-st+at} \space dt$$
$$F(s)=\int^{0}_{\infty} e^{t(a-s)} \space dt$$
$$\text{Indefinite integral;}$$
$$F(s)= \left.\frac{e^{t(a-s)}}{a-s}\right|^{\infty}_{0}$$
$$\text{it converges at 0 for } s>a: 0-\frac{1}{a-s}=\frac{1}{s-a}$$
$$\text{diverges for } s\leq a$$
