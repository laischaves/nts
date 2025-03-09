# Juros

**Juros** podem ser definido como sendo a ==remuneração pelo uso do capital==.

Em um intervalo de tempo, os juros são obtidos pela diferença entre o capital no final e o do início do intervalo,

$$ J = F - P \space\space_{(1)}$$

Onde, $J$ = juros, $F$ = capital final ou _montante_ e $P$ = capital inicial ou _principal_. Logo,

$$ F = P + J \space\space_{(2)}$$

**Taxa de juros** podem ser entendidas como a remuneração da unidade de capital inicial (principal), em um intervalo de tempo.

$$i = \frac{J}{P} \space\space_{(3)}$$
Logo,
$$\begin{matrix}
J = P \times i 
\\
F = P(1+i) \\&&(4)
\end{matrix}$$
==A unidade de tempo precisa ser descrita claramente, 1 ano pode ser expresso com 365 dias, 252 dias úteis, 12 meses, 2 semestres, etc.  _J_ indica os juros recebidos no período de tempo a que se refere a taxa, em (4).==

##### Exemplo 1

Um indivíduo investe $ 5 000,00 pelo prazo de 2 meses. No final do prazo ele recebe $ 5 300,00. Determine: a) O fluxo de caixa, b) os juros recebidos, c) a taxa de juros.

a. Fluxo de caixa:

em n (mês): $n_0$ = 5 000, $n_2$ = 5 300 

b. Juros recebidos:

J = F - P, logo,

J = 5 300 - 5 000 = $ 300

c. Taxa de juros:

i = J/P, logo

i = 300 / 5 000 = 0,06 = 6% a.p.


#### Taxas Proporcionais
Chamam se taxas proporcionais, duas taxas de juros $i_1$ e $i_2$, expressas em unidades de tempo distintas que, quando incidindo sobre o mesmo _principal_ e durante o mesmo prazo, produzem um mesmo montante, no **regime de capitalização simples**.

Considerando:

Principal: $P$; 

taxas: $i_1$ e $i_2$;

prazos iguais: $n_1$ e $n_2$ em relação às unidades de tempo $i_1$ e $i_2$, gerando o mesmo montante: $F$.

$$\begin{matrix}
F = P(1 + n_1 i_1)\\
F = P(1 + n_2 i_2) \\
\text{logo,}\\
n_1 i_1 = n_2 i_2
\end{matrix}$$



##### Exemplo 1:

Determinar a taxa trimestral proporcional à taxa (a.t.) melhor de 8% a.a.

**Resolução:**

- $i_1 = i_a$ = taxa anual
- $i_2 = i_t$ = taxa trimestral
- $n_1 = 1$ ano
- $n_2 = 1$ ano = 4 trimestres

Logo,

$$\begin{matrix*}[l]

n_1 \times i_1 = n_2 \times i_2
\\
1 \times i_a = 4 \times i_t
\\
i_a = 4i_t \Rightarrow i_t = \frac{i_a}{4}
\\\\
\text{Assim,}\\
\\
i_t = \frac{8\%}{4}=2\%
\\
i_t = 2\% (a.t.)

\end{matrix*}$$


#### Taxas Equivalentes
Chamam se taxas proporcionais, duas taxas de juros $i_1$ e $i_2$, expressas em unidades de tempo distintas que, quando incidindo sobre o mesmo _principal_ e durante o mesmo prazo, produzem um mesmo montante, no **regime de capitalização composta**.

> A taxa diária equivalente é também conhecida como taxa por dia corrido.

$$\begin{matrix*}[l]
&&F = P(1+i_1)^{n_1}
\\\\
\text{E,}
\\\\
&&F = P(1+i_2)^{n_2}
\\\\
\text{Logo,}
\\\\
&&(1+i_1)^{n_1} = (1+i_2)^{n_2}
\end{matrix*}$$


##### Exemplo 2:
Determinar a taxa diária equivalente à taxa de 0,65% a.m.

- $i_1$ = $i_m$ = taxa mensal
- $i_2$ = $i_d$ = taxa diária
- $n_1$ = 1 mês
- $n_2$ = 1 mês = 30 dias (mês comercial)


$$\begin{matrix*}[c]

(1+i_1)^{n_1} = (1+i_2)^{n_2}
\\
(1+i_m)^{1} = (1+i_d)^{30}
\\\\
\Downarrow
\\\\
i_d = (1 + i_m)^{1/30} - 1
\\
i_m = 0,65\% = 0,0065 
\\
i_d = (1 + 0,0065)^{1/30}-1
\\
i_d = 0,0216\%
\end{matrix*}$$
**$i_d$ = 0,0216% a.d.**





---
bib:
SECURATO, Calculo Financeiro das Tesourarias
