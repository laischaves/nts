# MOSFET: metal-oxide-semiconductor field effect transistor


## MOSFET equations
**Definitions:**

| Variable    | Description                                                   |
| :---------: | ------------------------------                                |
| G           | gate                                                          |
| S           | source                                                        |
| D           | drain                                                         |
| $I_{DSS}$   | corrente de dreno em saturação (drain-source shorted current) |
| $V_t$       | tensão de limiar/threshold                                    |
| $V_{GS}$    | tensão entre source and gate                                  |
| $K$         | parametro do transístor                                       |
| $\mu_n$     | mobilidade dos elétrons                                       |
| $C_ox$      | capacidade do óxido                                           |


**Equations:**

a) N-channel MOSFET

| Cutt Off   | $V_{GS} \leq V_t$                          | $I_{DS}=0$                                                           |
| ---------- | -------------------                        | ------------                                                         |
| Linear     | $V_{GS}>V_t, \space V_{DS}\leq V_{GS}-V_t$ | $I_{DS}=K[(V_{GS}-V_t)V_{DS}-\frac{V_{DS}^2}{2}](1+ \lambda V_{DS})$ |
| Saturation | $V_{GS}>V_t, \space V_{DS}>V_{GS}-V_t$     | $I_{DS} = K(V_{GS}-V_t)^2(1+\lambda V_{DS})$                         |



O valor da corrente de dreno em saturação para $V_{GS}=0$:
$$I_{DSS}=KV^2_t$$

$$K=[2(v_{GS}-V_t)v_{DS}-v^2_{DS}]$$
$$K=\frac{1}{2}\mu_n C_ox (\frac{W}{L})$$
$$\frac{1}{2}\mu_n C_ox \approx 10\mu A/V^2 \space\space_{\text{(NMOS)}}$$



