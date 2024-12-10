
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
[[Integrals]] must be solved by converting it to a limit.

## Properties
1) Linearidade Se c1 e c2 são constantes e e são
funções cujas transformadas de Laplace são, respectivamente,
e , então

$$ L{ c_1 f_1 (t) + c_2 f_2 (t) = c_1 F_1 + c_2 F_2 (s) } $$
ou
$$ L[af(t) + bg(t)] = aF(s)+bG(s) $$

Devido a esta propriedade, se diz que a transformada de Laplace
é um operador linear.

3) Transformada de Laplace das derivadas de uma função
A transformada de Laplace de uma derivada de 1ª ordem de
uma função está dada por:

$$ L{f'(t)} = sF(s)-f(0) $$

∴ f(0) é o valor de f(t) em t=0.

A transformada de Laplace da segunda derivada de uma
função está dada por:

$$L[{\ddot{f}(t)}] = s^2F(s)-sf(0)-f'(0)$$

E seguindo a regra:

$$L[{f^{(n)}(t)}] = s^n F - s^{n-1}f(0) - s^{n-2}f'(0) - \dots - f^{(n-1)}(0)$$

Example:
Derivadas de uma função:

Dada a constante arbitrária c

> 1.
>$$L[f^2(t)]\text{ com } f^2(t) \text{ igual à } c\ddot{x}
 \text{ será}$$
 $$cs^2F(s)-s^1f(0)-f(0)$$
> 2.
>$$L[x^1(t)]\text{ com } x^1(t) \text{ igual à } c\dot{x}
 \text{ será}$$
 $$cs^1X(s)-s^0x(0)-x(0)$$
>3. 
>$$L[y(t)]\text{ com } y(t) \text{ igual à } y
 \text{ será}$$
 $$cs^0Y(s)-y(0)$$
> Considerando condições iniciais nulas em todos os anteriores, resultam em
> $$cs^2F(s), \space csX(s)\text{ and } cY(s)$$
> Example:
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
