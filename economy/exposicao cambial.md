**Exposição cambial**: Segundo o BCB, é o total de _exposição_ em ouro, moeda estrangeira e em ativos e passivos referenciados na variação cambial mantida por uma instituição. É a derivada de uma marcação de mercado, é a medida de quanto o valor de um ativo, rendimento ou fluxo de caixa _pode mudar_ devido às _variações nas taxas de câmbio_.

$$\begin{matrix*}
\text{Exp}=qtd (contratos) \times 50\space 000 \times \frac{ \text{curva}-1}{\text{Fator Pré x SpotUSDBRL}}
\\\\
\text{curva = FWD USDBRL}
\\\\
\text{FWD} = \text{Spot} \times \frac{(1+Pre)^{DU/252}}{1+CPM+\frac{DC}{360}}
\\\\
\text{Exp}=qtd \times 50\space 000 \times \frac{ \text{Spot} \times \frac{(1+Pre)^{DU/252}}{1+CPM+\frac{DC}{360}}-1}{\text{Fator Pré x SpotUSDBRL}}
\\\\
\text{Exp}= \frac{qtd \times 50\space 000}{1 + CPM \times \frac{DC}{360}}
\end{matrix*}$$


##### Exemplo 1:

Dados:

- DU = 7
- DC = 10
- Pré = 13,15%
- Cupom = 4,35%
- SpotUSDBRL = 5,791207

Capt. BR = $(1+13,15\%)^{7/252} = 1,003437678$

Capt. Clean = $1+4,35\% \times 10/360 = 1,001208333$

Exposição FX = Capt. BR/Capt. Clean x SpotUSDBRL = $(1,003437678/1,001208333)/5,791207 = 5,804102016
$


---
> Pré: curva de juros local em BRL
> 
> Cupom: curva de juros local em USD