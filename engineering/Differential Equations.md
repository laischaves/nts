# Differential Equations
> A differential equation is an equation which contains one or more terms and the derivatives of one variable (i.e., dependent variable) with respect to the other variable

Differential equations are classified by **type, order and linearity**.

An **ordinary differential equation** (ODE) is an equation containing an unknown function of **one** real or complex variable x, its derivatives, and some given functions of x. The unknown function is generally represented by a variable (often denoted y), which, therefore, depends on x. Thus x is often called the *independent variable* of the equation. E.g.:  
$$\begin{align}
&\frac{dy}{dt}-5y=1\space\space\space &(1)
\\\\
&\frac{du}{dx}-\frac{dv}{dx}=x\space\space\space &(2)
\\\\
&\frac{d^2y}{dx^2}-2\frac{dy}{dx}+6=0\space\space\space &(3)
\end{align}$$

If the equation involves partial derivatives, with relation to two or more independent variables, it is called **partial differential equation**.
E.g.:

$$\begin{align}
&\frac{\partial u}{\partial y} = \frac{\partial v}{\partial x} &(1)
\\\\
&x\frac{\partial u}{\partial x} + \frac{\partial u}{\partial y}=y &(2)
\end{align}$$


The **order of the equation** is simply the order of the biggest derivative in it. E.g.: $\frac{d^2y}{dx^2}+5=e^x$ is an 2nd order differential equation.

A differential equation is called linear when it can be rewritten as:
$$
a_n(x)\frac{d^ny}{dx^n}+ a_{n-1}(x)\frac{d^{n-1}y}{dx^{n-1}}+\dots + a_1(x)\frac{dy}{dx} + a_0(x)y = g(x)
$$

And it is characterized by the following properties:
- the dependent variable y and all it's derivatives are of first order
- each coefficient depends only on the independent variable x
E.g.:
$$\begin{align*}
&xdy + ydx = 0 &(1) 
\\ 
&y'' - 2y' + y = 0 &(2)
\\
&x^3\frac{d^3y}{dx^3}-x^2\frac{d^2y}{dx^2}+3x\frac{du}{dx}+5y=e^x &(3)
\end{align*}$$

Any equation $y=f(x)$, that, put into the differential equation, reduces it to an identity, is called a solution to the equation. E.g.:


$$\begin{align}
&y\frac{x^4}{16}\rightarrow y\prime=xy^{1/2} &(1)
\\\\
&y=xe^x \rightarrow y\prime\prime-2y\prime+y=0 &(2)
\end{align}$$

###### Problem 1.

$$\begin{align}
&y^{1/2} = \sqrt{y} &(1)
\\
&\frac{dy}{dx} = x\sqrt{2} &(2)
\end{align}$$
To isolate x and y we can treat $dy/dx$ as a common fraction.

$$\begin{align}
&dy = x\sqrt{y}\space dx &(1)
\\
&\frac{dy}{\sqrt{y}}=xdx &(2)
\\
\\
&\int y^{-1/2}dy=\int xdx &(3)
\\
&\int y^{-1/2}dy =2\sqrt{2} &(4)
\\
&2\sqrt{y}=\frac{x^2}{2}+C &(4)
\\
&\sqrt{y}=(\frac{x^2}{4}+\frac{C}{2}), \space \frac{C}{2}=K &(5)
\\
&y = (\frac{x^2}{4}+k)^2 &(6)
\\
&\text{or as a general solution: }y=\frac{x^4}{16} &(7)
\end{align}$$





.$$\begin{align}

\end{align}$$