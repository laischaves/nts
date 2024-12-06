
| $ax$        | $aX$    |     |
| ----------- | ------- | --- |
| $a\dot{x}$  | $asX$   |     |
| $a\ddot{x}$ | $as^2X$ |     |
transfer function: $\frac{output}{input}\rightarrow X(a) = Y(b) \rightarrow \frac{X}{Y}=\frac{b}{a}$

| Sistema  | Resistências       | Capacitâncias                       | Indutâncias                   |
| -------- | ------------------ | ----------------------------------- | ----------------------------- |
| Elétrico | $E = Ri$           | $E=\frac{1}{C}\int idt$             | $E=L\frac{di}{dt}$            |
| ---      | ---                | $\frac{1}{\Delta C}$                | $\Delta L$                    |
| Mecânico | $F = B\dot{x}$     | $F = -k_s x$                        | ---                           |
| Fluídico | $\Delta P = R_f Q$ | $\Delta P =\frac{1}{C_1}\int Q dt$  | $\Delta P = I_i\frac{dQ}{dt}$ |
| Térmico  | $\Delta T = R_t q$ | $\Delta T = \frac{1}{C_1}\int q dt$ | ---                           |
 No fixed reference:
$f = k(x_1 - x_2)$ | $\tau(t)=k(\theta_2 -\theta_1)$
 ![[model_fig_003_element.png]]
 
 parallel: $k_{eq}=(k_1+k_2)$  |  series: $k_{eq}=\Large{\frac{1}{\frac{1}{k_1}+\frac{1}{k_2}}}$
![[Pasted image 20230907151305.png]]

![[model_fig_004_element.png]]

no fixed reference: $f(t)=b(\dot{x}_2 - \dot{x}_1)$   |   $\tau(t)=b(\dot{\theta}_2-\dot{\theta}_1)$

parallel: $b_{eq}=(b_1+b_2)$ | series: $b_{eq}=\Large{\frac{1}{\frac{1}{b_1}+\frac{1}{b_2}}}$
![[model_fig_008_analogy.png]]