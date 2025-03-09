# Regimes de capitalização

## Regimes de Capitalização Discreta

> Nos regimes de capitalização direta, os juros são incorporados apenas ao fim do período de capitalização.
#### Capitalização simples

Neste regime, os juros são gerados apenas pelo capital P inicialmente investido. Os juros _j_, que são formados ao fim dos intervalos de tempo, expressos na taxa de juros _i_, são calculados por $j = P \times i$, logo,
- Juros gerados durante o 1º intervalo unitário de tempo $j_1=P\times i$
- Juros gerados durante o 1º intervalo unitário de tempo $j_2=P\times i$
- Juros gerados durante o 1º intervalo unitário de tempo $j_n=P\times i$

Os juros totais ao final de _n_ intervalos:
$$\begin{matrix*}[c]
J = j_1 + j_2 + j_3 + \dots + j_n \space(n \text{ parcelas})
\\\\
J = P \times i + P \times i + P \times i + \dots + P \times i
\\
J = n \times P \times i
\\\\
\text{Considerando}\\
F = P + J
\\\\
\text{Logo,}
\\
F = P + n \times P \times i
\\
F = P(1 + n \times i)
\end{matrix*}$$

- Os juros simples _J_ são **diretamente proporcionais** ao capital inicial _P_, ao número de intervalos _n_ e à taxa de juros _i_.

#### Capitalização composta

Neste regine, os juros (formados no fim de cada intervalo _n_) são gerados pelo montante existente no início de cada intervalo. Ou seja, os juros são gerados pela soma do _P_ com os juros _J_ já acumulados no fim do intervalo anterior.

> O modelo associado considera uma taxa constante, com um o intervalo unitário de tempo, ao fim do qual os juros resultantes são incorporados ao capital.

Sabendo que J = P x i, no fim do 1º intervalo _n_: 
$$
\begin{matrix*}[c]
J_1 = P \times i \\
\text{ e } \\
F_1 = P + J_1 = P (1 + i)
\end{matrix*}$$
E no fim do segundo:
$$\begin{matrix*}[c]
J_2 = F_1 \times i \\ 
\text{ e } \\ 
F_2 = F_1 + J_2
= P(1+i) +P\times i
\\
= P (1 + i)^2
\end{matrix*}$$
E do terceiro;

$$\begin{matrix*}[c]
J_3 = F_2 \times i \\
\text{ e } \\
F_3 = F_2 + J_3 = P (1 + i)^3
\end{matrix*}$$
Pode se generalizar:


$$ F = P(1+i)^n $$

> ==$i = (\frac{F}{P})^{\frac{1}{n}} - 1$ também é chamada **taxa efetiva da operação**==
##### Exemplo 1:

Qual o montante no fim de 5 anos numa aplicação de $ 20 000,00 à juros simples de 9% a.a.

**Resolução:**

- J = 9%
- n = 5
- P = 20 000

F = 20 000 x ( 1 + 5 x 9%) = **$ 29 000,00**


##### Exemplo 2:
Uma aplicação envolvendo um principal de $ 40 000,00 gera um montante de $ 55 700,00 em 68 dias, em capitalização composta. Determine a _taxa de juros mensal_ da operação:

- P = 40 000
- F = 55 700
- n = 68/30
- $F = P(1 + i)^n$

$$\begin{matrix*}[c]
F = P(1 + i)^n \Rightarrow \frac{F}{P}=(1+i)^n
\\
(\frac{F}{P})^{\frac{1}{n}} = 1 + i
\\
i = (\frac{F}{P})^{\frac{1}{n}} - 1
\\

\end{matrix*}$$
```excel
=POWER([@F]/[@P];1/[@T])-1
```

$(\frac{55 700}{40 000})^{(30/68)}-1 \approx 15,73\%$ a.m.


---
bib:
SECURATO, Calculo Financeiro das Tesourarias