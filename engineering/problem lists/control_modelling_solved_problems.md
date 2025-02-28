# Solved Problems

1. No sistema mecânico abaixo, temos um carro de massa desprezível e um sistema massa-mola-amortecedor. u é o deslocamento do carro e a entrada do sistema. O carro se move a uma velocidade constante (du/dt = constante). O deslocamento y da massa é a saída. A massa do sistema é m, a constante elástica da mola é k e o coeficiente de atrito viscoso do amortecedor é b. Obtenha o modelo matemático do sistema.
![[singlecartp.png]]

Solution:
$$
\begin{matrix}
m\ddot{y} = -k(y-u) - b(\dot{y}-\dot{u})
\\
m\ddot{y} + b\dot{y} + ky = b\dot{u} + ku
\\
ms^2Y + bsY + kY = bsU + kU
\\
Y(ms^2+ bs + k) = U(bs + k)
\\
\frac{Y}{U}=\Large{\frac{bs+k}{ms^2+bs+k}}
\end{matrix}
$$

2. Obtenha o modelo matemático e a função de transferência X1(s)/U(s) para o sistema mecânico abaixo. x1 e x2 são deslocamentos e u é a força de entrada. As massas do sistema são m1 e m2, as constantes elásticas das molas são k1, k2 e k3, e o coeficiente de atrito viscoso do amortecedor é b.

![[two_cart.png]]

Solution:

$$
\begin{matrix}
m_1\ddot{x} = -k_1x_1 -k_2(x_1 - x_2) - b(\dot{x}_1 - \dot{x}_2) + u
\\
m_2 \ddot{x} = -k_3x_2 -k_2(x_2 - x_1) - b(\dot{x}_2 - \dot{x}_1) 
\\
m_1s^2X_1 = -k_1X_1 - k_2X_1 + k_2X_2 - bsX_1 + bsX_2 + U
\\
m_1s^2X_1 = -k_3X_2 - k_2X_2 + k_2X_1 - bsX_2 + bsX_1
\\
\\
X_1(m_1s^2 + k_1 + k_2 + bs) = X_2(k_2 + bs) + U
\\
X_2(m_2s^2 + k_3 + k_2 + bs) = X_1(k_2 + bs)
\\
\\
A_1 = (m_1s^2 + k_1 + k_2 + bs)
\\ 
A_2 = (m_2s^2 + k_3 + k_2 + bs)
\\
\\ \text{equation system}
\\
B = (k_2 + bs)
\\
X_1A_1 = X_2B + U
\\
X_2A_2 = X_1B
\\
\\
X_2 = \frac{X_1B}{A_2} \rightarrow X_1A_1 = \frac{X_1B}{A_2}B+U
\\
X_1 A_1 =\frac{X_1B^2}{A_2} + U
\\
X_1(A_1 - \frac{B}{A_2}) = U
\\
\frac{X_1}{U}=\frac{1}{A_1-\frac{B^2}{A_2}}
\\
\\
\frac{X_1}{U}=\Large{\frac{1}{(m_1s^2 + k_1 + k_2 + bs)-\frac{(k_2 + bs)^2}{(m_2s^2 + k_3 + k_2 + bs)}}}

\end{matrix}
$$


3. RLC System
![[rlc_system.png]]

Primeiro, aplica-se a lei de Kirchhoff's para tensão:
$$\Sigma V = 0 \space\space\space\space\text{(Kirchhoff's law)}$$

$$\begin{matrix}
e_i(t)-L\frac{di}{dt}-Ri-\frac{1}{C} \int{i\space dt} = 0
\\\\
\frac{1}{C}\int{i\space dt} = e_o
\end{matrix}$$

Então aplica-se a Transformada de Laplace

$$\begin{matrix}
\mathcal{L}[e_i=L\frac{di}{dt}-Ri-\frac{1}{C} \int{i\space dt}]=
\\
=I(s)\cdot L +I(s)\cdot R + I(s)\cdot(\frac{1}{C}\cdot\frac{1}{s})=E_i(s)
\\\\
\mathcal{L}[\frac{1}{C}\int{i\space dt} = e_o]=
(\frac{1}{C}\cdot \frac{1}{s}) I(s)=E_o(s)
\end{matrix}
$$
A função de transferência se dá por
$$
\frac{E_o(s)}{E_i(s)}=\frac{1}{LCs^2+RCs+1}
$$


4. Circuito RC em cascata
![[cascaded_rc_circuit.png]]

Primeiro, aplica-se a lei de Kirchhoff's para tensão:
$$\Sigma V = 0 \space\space\space\space\text{(Kirchhoff's law)}$$

$$\begin{matrix}
\frac{1}{C_1}\int (i_1 - i_2)\space dt + R_1 i_1 = e_i
\\
\\
\frac{1}{C_1}\int (i_2 - i_1) \space dt + R_2i_2 + \frac{1}{C_2}\int i_2 \space dt = 0
\\
\\
\frac{1}{C_2}\int i_2 \space dt = e_o
\end{matrix}$$

Então aplica-se a Transformada de Laplace

$$\begin{matrix}
\frac{1}{C_1s}[I_1(s)-I_2(s)]+R_1I_1(s)=E_i(s)
\\
\frac{1}{C_1s}[I_2(s)-I_1(s)]+R_2I_2(s)+\frac{1}{C_2s}I_2(s)=0
\\
\frac{1}{C_2s}I_2(s)=E_o(s)
\end{matrix}$$
Então elimina-se $I_1(s)$ e $I_2(s)$ para simplificar, e a função de transferência se dá por
$$
\begin{matrix}
\frac{E_o(s)}{E_i(s)}=\frac{1}{(R_1C_1s+1)(R_2C_2s+1)+R+1C_2s}
\\
=\large\frac{1}{R_1C_1R_2C_2s^2+(R_1C_1+R_2C_2+R_1C_2)}
\end{matrix}
$$
