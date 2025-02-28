# Poles and Zeros

A transfer function is a rational function in the complex variable $s = \sigma + j + \omega$:

$$
\begin{align}
&H(s) = \frac{ b_m s^m + b_{m-1} s^{m-1} + \dots + b_1 s + b_0 }{ a_n s^n + a_{n-1} s^{n-1} + \dots + a_1 s + a_0 }
&(1)
\end{align}
$$

It is convenient to factor the polynomials and write the function in term of those factors:

$$
\begin{align}
&H(s) = \frac{ N(s) }{ D(s) } = K \frac{ (s-z_1) (s-z_2) \dots (s-z_{m-1}) (s-z_m)}
{ (s-p_1) (s-p_2) \dots (s-p_{n-1}) (s-p_n)} &(2)
\end{align}
$$

the numerator and denominator are polynomials, N(s) and D(s), have real coefficients defined by
the system's differential equation and $K=b_m/a_n$. As written in Eq. (2) the $z_i$'s are the
roots of the equation $N(s) = 0$, and are defined to be the **zeros** of the system, while
the $p_i$'s are the roots of the $D(s) = 0$ equation and are the system's **poles**.

That means that when $s = z_1$, N(s) = 0 and the function vanishes. If $s = p_i$, D(s) = 0
and the function becomes unbounded,

$$
\begin{align}

&\lim_{s \to z_i} H(s) = 0
\\
&\lim_{s \to p_i}  H(s) = \infty

\end{align}
$$

All of the coefficients of polynomials N (s) and D(s) are real, therefore the poles and zeros must
be either purely real, or appear in complex conjugate pairs. In general for the poles, either $p_i = \sigma_i$,
or else $p_i$, $p_i+1$ = \sigma_i \pm j\omega_i. The existence of a single complex pole without a corresponding conjugate
pole would generate complex coefficients in the polynomial D(s). Similarly, the system zeros are
either real or appear in complex conjugate pairs.


&#9632 Example

Given the linear system described,
$$
\begin{align}

\frac{ d^2y }{ dt^2 } + 5\frac{ dy }{ dt } + 6y = 2 \frac{ du }{ dt} + 1

\end{align}
$$

find its poles and zeros.

&#9642 **Solution**

The first step is to get the transfer function using the [[Laplace Transform]]

$$
\begin{align}
& L(\frac{ d^2y }{ dt^2 }) = s^2Y(s), L(5\frac{ dy }{ dt }) = 5sY(s), L(6y) = 6Y(s)
& (i)
\\
& L(2 \frac{ du }{ dt}) = 2sU(s), L(1) = 1/s
& (ii)
\\
& s^2Y(s) + 5sY(s) + 6Y(s) = 2sU(s) + 1/s
& (iii)

\end{align}
$$


given $H(s) = \frac{Y(s)}{U(s)}$ and dividing through $U(s)$,

$$
\begin{align}

& (s^2+5s+6)Y(s) = 2sU(s)+1/s & (iv)
\\
& Y(s) = \frac{ 2sU(s)+1/s }{ s^2 + 5s + 6}
& (v)
\end{align}
$$

we can isolate H(s):

$$
\begin{align}

& H(s) = \frac{ Y(s) }{ U(s) } = \frac{ 2s }{ 2^s + 5s + 6 } 
& (vi)

\end{align}
$$


The **poles** are the roots of the _denominator_ of H(s), in this case U(s):

$$
\begin{align}

&s^2 + 5s + 6 = 0
\\
& (s+2)(s+3) = 0, \Longrightarrow s = -2, -3
& (vii)

\end{align}
$$

The poles, then, are s = -2 and s = -3.

The **zeros** are the roots of the _numerator_ of H(s), in this case Y(s):

$$
\begin{align}

& 2s = 0 \Longrightarrow s = 0
& (viii)

\end{align}
$$

The zeros, then, are just a single one, s = 0.



$$
\begin{align}

\end{align}
$$



