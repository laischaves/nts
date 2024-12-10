lista de modelagem
1. Obter a EDO e função de transferência para o sistema elétrico abaixo. Entrada: tensão $E_i (t)$ e saída: $E_0 (t)$
 > ![[Pasted image 20230508160125.png]]  

Solução:
EDO:
$$
Z_1 = R//C_{1s} \rightarrow \frac{R}{RC_1 +1}$$

$$Z_2 = C_2 = \frac{1}{C_{2s}}$$

$$E_0 = C_2 i \therefore E_0=Z_2 i, \space\space\space i=\frac{E_0}{Z_2}$$

$$E_i = Z_1 i - Z_2 i = 0$$

$$E_i - i(Z_1+Z_2)=0 (I) E_i - \frac{E_0}{Z_2}(Z_1+Z_2)=0$$

$$E_i = \frac{E_0}{Z_2}(Z_1)+(Z_2)\rightarrow \frac{E_0}{E_i} = \frac{Z_2}{Z_1+Z_2} = $$

$$\frac{1/C_{2_s}}{(\frac{R}{RC_{1_s}}+1)}+\frac{1}{C_{2_s}}$$

$$R(C_1+C_2)\cdot \frac{de_0 (t)}{dt} + e_0(t) = RC_1 \frac{de_i (t)}{dt} + e_i(t)
$$

Função de transferência:
$$
\frac{E_0 (s)}{E_i (s)} = \frac{RC_1 s+1}{R(C_1 + C_2)s+1}
$$


2. Obter a função de transferência $\frac{X_1(s)}{F(s)}$ para o sistema:
> ![[Pasted image 20230508185809.png]]
Solução:

$$m_1: f_{mola} = -k(x_1-x_2), \space\space f_{amortecedor}=-B(\dot{x_1}-\dot{x_2})\rightarrow$$

$$\rightarrow m_1\cdot\ddot{x_1}+B\dot{x_1}+kx_1 = B\dot{x_2}+kx_2 $$

$$m_2: f_{mola} = -k(x_2-x_1), \space\space f_{amortecedor} = -B(\dot{x_1}-\dot{x_2})\rightarrow$$

$$\rightarrow m2\cdot\ddot{x_2}+B\dot{x_2}+kx_2 = B\dot{x_1}+kx_1+f(t)$$

$$\mathcal{L}_a\{ m_1 s^2 X_1(s) + B s X_1(s) +k X_1(s) = B s X_2(s) + kX_2(s)\}$$
$$\mathcal{L}_b\{ m_2 s^2 X_2(s)+BsX_2(s) + kX_2(s) = BsX_1(s) + kX_1(s) + F(s) \}$$
$\newline$

$$(a): X_2(s)=\frac{X_1(s)(m_1s^2+Bs+k)}{Bs+k}$$

$$\begin{align}
(a) \text{ em } (b): \frac{X_1(s)(m_1s^2+Bs+k)}{Bs+k}\cdot(m_2s^2+Bs+k)& \\=X_1(s)(Bs+k)+F(s)
\end{align}$$

$\newline$

$$\frac{m_1m_2(s^2+Bs+k)^2}{Bs+k}=\frac{X_1(s)(Bs+k)}{X_1{s}}+\frac{F(s)}{X_1(s)}$$

$$\frac{F(s)}{X_1(s)}=\frac{m_1m_2(s^2+Bs+k)^2}{(Bs+k)}-(Bs+k)$$

$$\frac{F(s)}{X_1s}=\frac{m_1m_2(s^2+Bs+k)^2 - (Bs+k)^2}{(Bs+k)}$$

$$\frac{X_1s}{F(s)} = \frac{(Bs+k)}{m_1m_2(s^2+Bs+k^2)(Bs+k)^2}$$

$$\frac{x_1(s)}{F(s)}=\frac{Bs+k}{m_1 m_2 s^4 + B(m_1+m_2)s^3+k(m_1+m_2)s^2}$$

3. Obter a função de transferência $\frac{\theta_2(s)}{t(s)}$
> ![[Pasted image 20230508211445.png]]

$T_1 = - B(\dot{\theta_1}-\dot{\theta_2})$

$J\ddot{\theta_1}=T + T_1$

$$
\begin{align}
J\ddot{\theta_1} &= T-B(\dot{\theta_1}-\dot{\theta_2}) & (1)
\end{align}
$$
A: 
> $T_A = -B(\dot{\theta_2}-\dot{\theta_1}) \rightarrow J_A\cdot\ddot{\theta_2} = T_A +T_m$
> 
> $T_m = -K(\dot{\theta_2}-0)$

> $B(\dot{\theta_2} - \dot{\theta_1})=K\theta_2\rightarrow B\dot{\theta_2}-B\dot{\theta_1}=-K\theta_2 \rightarrow$
> 
> $\rightarrow \dot{\theta_1}=\frac{-(K\theta_2-B\dot{\theta_2})}{B} = \frac{K\theta_2+B\dot{\theta_2}}{B}$

$$
\begin{align}
\dot{\theta_1}&= \frac{K\theta_2+B\dot{\theta_2}}{B} &(2)
\end{align}
$$


$$
\begin{align}
J \theta_1(s)s^2 &= T(s) - B\theta_1(s)s+B\theta_2(s)s & (3)
\\
\theta(s)s&=(K\theta_2(s)+B\theta_2(s)s) & (4)
\end{align}
$$

(4) em (3): $$Js(\frac{K\theta_2(s)+B\theta_2(s)s}{B})=T(s)-B( \frac{K\theta_2(s)+B\theta_2(s)s}{B} )+B\theta_2(s)s$$

$$\frac{JK\theta_2(s)s^2+JB\theta_2(s)s^2}{B}=T(s)-K\theta_2(s)-B\theta_2(s)s+B\theta_2(s)s$$


$$\theta_2(s)(\frac{JKs^2+JBs^2+K}{B})=T(s) \rightarrow$$

$$\rightarrow \frac{T(s)}{\theta_2(s)}=\frac{JKs^2+JBs^2+KB}{B}\rightarrow$$

> $$\frac{\theta_2(s)}{T(s)}=\frac{B}{JKs^2+JBs^2+KB}$$

5. Dado o circuito a seguir, encontre a função de transferência $\frac{E_o(s)}{E_i(s)}$
![[Pasted image 20230509160416.png]]

$$Z_1 = \frac{\frac{R_1}{C_1s}}{\frac{1}{C_1s}+R}=\frac{R_2}{C_2s}\frac{C_2s}{1+R_2C_2s}=\frac{R_2}{1+R_2C_2s}$$

$$Z_2=\frac{C_2s}{\frac{1}{C_2s}+R_2}=\frac{R_2}{C_2s}\frac{C_2s}{1+R_2C_2s}=\frac{R_2}{1+R_2C_2}$$


$$
\begin{align}
e_m(t)=\frac{-Z_2}{Z_1}e_i(t)\rightarrow\mathcal{L} \{E_m(s)\\=\frac{-R_2}{1+R_2C_2s}\frac{1+R_1C_1s}{R1}E_i(s)\rightarrow E_i(s)&=-E_m(s)\frac{(R_1+R_1R_2C_2s)}{R_2+R_1R_2C_1s} &(1)
\\
e_0(t)=\frac{-R_4}{R_3}e_m(t)\rightarrow\mathcal{L}\{E_0(s)&=\frac{-R_4}{R_3}E_m(s) &(2)
\end{align}$$

$$
\begin{align}\frac{(2)}{(1)}&=\frac{E_0(s)}{E_i(s)}=\frac{-R_4}{R_3}E_m(s)\frac{1}{E_i(s)}\rightarrow \\ \frac{E_0(s)}{E_i(s)}&=(\frac{-R_4}{R_3}E_m(s))(\frac{-R_2+R_1R_2C_1s}{E_m(s)(R_1+R_1R_2C_2s)})\end{align}$$

$$\frac{E_0(s)}{E_i(s)}=\frac{R_2R_4(1+R_1C_1s)}{R_1R_3(1+R_2C_2s)}$$


6. Considere o sistema formado pelo termômetro de mercúrio, com parede fina de vidro, na figura a seguir. Suponha que o termômetro entrega a uma temperatura $\theta$ e em t=0 ele seja imerso em um banho com temperatura $\theta_b$. Determine a equação diferencial ordinária, sendo $\theta(t)$: saída do sistema e $\theta_b(t)$: entrada do sistema. Defina um análogo elétrico para o sistema com termômetro e o circuito elétrico representado.
![[Pasted image 20230509180540.png]]

Considerando: isolamento térmico, não geração de calor no processo, não realização de trabalho.

$$\Delta T=R_t\cdot q_1$$
$$(\theta_b -\theta)=R_t\cdot q_1 \rightarrow q_1=\frac{(\theta_b-\theta)}{R_t}$$
$$pvc\frac{dT}{dt}=q_1-q_0+qz+\frac{d\tau}{dt}$$
$$C_t \dot{T}=q_i$$
$$C_t\dot{\theta}=\frac{(\theta_b-\theta)}{R_t}\rightarrow R_tC_t\dot\theta=\theta_b-\theta\rightarrow R_tC_t\dot{\theta}+\theta=\theta_b$$

Circuito elétrico equivalente:
![[Pasted image 20230509182350.png]]

7. Para o sistema a seguir, determine $\frac{H(s)}{P_i(s)}$
![[Pasted image 20230509182545.png]]

$$\begin{align}
\rho_0&=pgh\\
\dot{m}&=\frac{dm}{dt}=p\frac{dV}{dt}=pA\frac{dt}{dt}\\
\Delta\rho&=R_fQ\rightarrow \rho_i-\rho_0=Rf_1Q_i\rightarrow Q_i\frac{\rho_i-pgh}{Rf_1}\\
\Delta\rho&=R_fQ\rightarrow\rho_0=Rf_2Q_0\rightarrow Q_0\frac{pgh}{Rf_2}\\
(Q_i-Q_0)p&=\dot{m}\\
(\frac{(P_i-pgh)}{Rf_1}-\frac{pgh}{Rf_2})p&=pA\frac{dh}{dt}\\
\frac{P_i}{Rf_1}-\frac{pgh}{Rf1}-\frac{pgh}{Rf2}&=A\dot{h}\\
A\dot{h}+\frac{pgh}{Rf_1}+\frac{pgh}{Rf_2}&=\frac{P_i}{Rf_1}\\
\dot{h}+\frac{h}{CfRf_1}+\frac{h}{CfRf_2}&=\frac{P_i}\\{ARf_1}\rightarrow
\\ H(s)s+\frac{H(s)}{CfRf_1}+\frac{H(s)}{CfRf_2}&=\frac{P_i(s)}{ARf_1}\\

\frac{P_i(s)}{H(s)ARf_1}&=\frac{1}{Cf}(Cfs+\frac{1}{Rf_1}+\frac{1}{Rf_2})\rightarrow \\
\frac{H(s)}{P_i(s)} &= \frac{Cf}{ARf_1}(\frac{1}{Cfs}+Rf_1+Rf_2)\\
\end{align}$$


