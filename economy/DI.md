# DI
No mercado financeiro, **DI** se refere ao **Depósito Interfinanceiro**: Esses depósitos são operações de curtíssimo prazo realizadas entre instituições financeiras para *ajuste de caixa*, normalmente com vencimento em um dia útil. O principal índice relacionado ao DI é a **Taxa DI**, que reflete o *custo médio dos empréstimos interbancários* e é usada como referência para diversas aplicações financeiras.

### Principais usos do DI no mercado financeiro:
1. **CDI (Certificado de Depósito Interbancário)**: É um título emitido por bancos para captar recursos de outros bancos. A **Taxa CDI** acompanha de perto a Taxa DI e serve como referência para investimentos de renda fixa.
2. **Referência para investimentos**: Muitos produtos, como CDBs, LCIs, LCAs e fundos DI, utilizam o CDI como benchmark.
3. **Derivativos**: Contratos futuros de DI são negociados na B3 e usados para proteção contra variações na taxa de juros.

## B3
### DI1
O Contrato Futuro de DI1 tem como *[[ativo subjacente]]* a taxa média diária dos Depósitos Interfinanceiros (DI), calculada e divulgada pela B3, compreendida entre a data de negociação, inclusive, e a data de vencimento, exclusive, e é utilizado para proteção e gerenciamento de risco de taxa de juro de ativos/passivos referenciados em DI.

Na B3, a **Taxa DI1** aparece nos *contratos futuros de juros*. Esses contratos permitem que investidores apostem na variação dos juros no futuro ou se protejam contra mudanças na economia.

Na B3, a Taxa DI é usada como referência para diversos produtos financeiros, especialmente os títulos de renda fixa, como os CDBs (Certificados de Depósito Bancário) e os títulos públicos. Quando você investe em um título que rende "100% do CDI", por exemplo, significa que o rendimento do seu investimento está atrelado à Taxa DI.

- DI1 Futuro da B3
$$
PU = \frac{ 100000 }{ (1+i_{US} \times \frac{DC}{360} )}
$$

- DDI Futuro da B3
$$
PU = \frac{ 50000 }{ (1 + i_{us} \times \frac{DC}{360} ) } \times \text{SpotUSDBRL}
$$ 
- NDF USDBRL de balcão
$$
PU = \frac{ \text{Notional} }{ (1+i_{US} \times \frac{DC}{360} )}
\times \text{SpotUSDBRL} - \frac{ \text{Notional}\times\text{FXContratual} }
{ (1 + i_{BR})^{(\frac{DU}{252})} }
$$




# Respostas do Chat

## 1. Cálculo do DV01 para o Portfólio do Scotiabank Brasil

### Dados do Portfólio:
- **NDF (Non-Deliverable Forward):**
  - Notional (\(N\)): 6 bilhões de USD
  - FX Contratual (\(F\)): 6.00
  - Spot USDBRL (\(S\)): 5.00
  - Taxa de juros BRL (\(i_{br}\)): 10% ao ano (0.10)
  - Taxa de juros USD (\(i_{us}\)): 2% ao ano (0.02)
  - Dias corridos (\(DC\)): 800 dias
  - Dias úteis (\(DU\)): 550 dias

- **DDI Futuro:**
  - Número de contratos: 120,000
  - Taxa de juros USD (\(i_{us}\)): 2% ao ano (0.02)
  - Spot USDBRL (\(S\)): 5.00
  - Dias corridos (\(DC\)): 800 dias

- **DI1 Futuro:**
  - Número de contratos: 360,000
  - Taxa de juros BRL (\(i_{br}\)): 10% ao ano (0.10)
  - Dias úteis (\(DU\)): 550 dias

---

### Fórmulas Gerais

#### 1. **NDF (Non-Deliverable Forward):**
O preço unitário (PU) do NDF é dado por:

$$
PU_{NDF} = \frac{N}{1 + i_{us} \cdot \frac{DC}{360}} \cdot S - \frac{N - F}{(1 + i_{br})^{DU/252}}
$$

- **DV01 para \(i_{br}\) (taxa de juros BRL):**

$$
DV01_{i_{br}}^{NDF} = -\frac{(N - F) \cdot \frac{DU}{252}}{(1 + i_{br})^{DU/252 + 1}} \cdot 0.0001
$$

- **DV01 para \(i_{us}\) (taxa de juros USD):**

$$
DV01_{i_{us}}^{NDF} = -\frac{N \cdot S \cdot \frac{DC}{360}}{(1 + i_{us} \cdot \frac{DC}{360})^2} \cdot 0.0001
$$

---

#### 2. **DDI Futuro:**
O preço unitário (PU) do DDI Futuro é dado por:

$$
PU_{DDI} = \frac{50000}{1 + i_{us} \cdot \frac{DC}{360}} \cdot S
$$

- **DV01 para \(i_{us}\) (taxa de juros USD):**

$$
DV01_{i_{us}}^{DDI} = -\frac{50000 \cdot S \cdot \frac{DC}{360}}{(1 + i_{us} \cdot \frac{DC}{360})^2} \cdot 0.0001 \cdot \text{Número de contratos}
$$

---

#### 3. **DI1 Futuro:**
O preço unitário (PU) do DI1 Futuro é dado por:

$$
PU_{DI1} = \frac{100000}{(1 + i_{br})^{DU/252}}
$$

- **DV01 para \(i_{br}\) (taxa de juros BRL):**

$$
DV01_{i_{br}}^{DI1} = -\frac{100000 \cdot \frac{DU}{252}}{(1 + i_{br})^{DU/252 + 1}} \cdot 0.0001 \cdot \text{Número de contratos}
$$

---

### Resultados Calculados com Valores Arbitrários

#### 1. **NDF:**
- **DV01 para \(i_{br}\):**

$$
DV01_{i_{br}}^{NDF} \approx -964,000 \text{ BRL}
$$

- **DV01 para \(i_{us}\):**

$$
DV01_{i_{us}}^{NDF} \approx -612,000 \text{ BRL}
$$

---

#### 2. **DDI Futuro:**
- **DV01 para \(i_{us}\):**

$$
DV01_{i_{us}}^{DDI} \approx -612,000 \text{ BRL}
$$

---

#### 3. **DI1 Futuro:**
- **DV01 para \(i_{br}\):**

$$
DV01_{i_{br}}^{DI1} \approx -5,790,000 \text{ BRL}
$$

---

### Resultado Total do Portfólio

O DV01 total do portfólio é a soma dos DV01 de todos os componentes:

$$
DV01_{total} = \left( DV01_{i_{br}}^{NDF} + DV01_{i_{br}}^{DI1} \right) + \left( DV01_{i_{us}}^{NDF} + DV01_{i_{us}}^{DDI} \right)
$$

Substituindo os valores calculados:

$$
DV01_{total} = \left( -964,000 + (-5,790,000) \right) + \left( -612,000 + (-612,000) \right)
$$

$$
DV01_{total} = -6,754,000 + (-1,224,000)
$$

$$
DV01_{total} \approx -7,978,000 \text{ BRL}
$$

---

### Interpretação:
- O portfólio tem um **DV01 total de aproximadamente -7,978,000 BRL**.
- Isso significa que, para um aumento de **0,01% (1 ponto base)** nas taxas de juros BRL e USD, o valor do portfólio diminui em aproximadamente **7,978,000 BRL**.

---

## 2. Explicação sobre a Multiplicação por 0,0001

A multiplicação por **0,0001** é feita porque o **DV01** mede a mudança no valor de um instrumento ou portfólio para uma variação de **1 ponto base** na taxa de juros. Um ponto base equivale a **0,01%**, ou seja:

$$
1 \text{ ponto base} = 0,01\% = 0,0001 \text{ (em decimal)}
$$

Portanto, para calcular o DV01, multiplicamos a derivada do preço em relação à taxa de juros por **0,0001**:

$$
DV01 = \frac{\partial PU}{\partial i} \cdot 0,0001
$$

Isso converte a sensibilidade do preço (em termos de mudança infinitesimal) para a mudança no preço correspondente a **1 ponto base**.

---

### Exemplo Numérico:
No caso do **DI1 Futuro**, se a derivada \(\frac{\partial PU}{\partial i_{br}}\) for calculada como \(-21.825.000\), então:

$$
DV01_{i_{br}} = -21.825.000 \cdot 0,0001 = -2.182,5 \text{ BRL}
$$

Isso significa que, para um aumento de **1 ponto base** na taxa de juros BRL, o preço do DI1 Futuro diminui em **2.182,5 BRL**.

---

### Resumo:
- **0,0001** é o fator de escalonamento que converte a sensibilidade do preço (derivada) para a mudança no preço correspondente a **1 ponto base**.
- # Respostas do Chat

## 1. Cálculo do DV01 para o Portfólio do Scotiabank Brasil

### Dados do Portfólio:
- **NDF (Non-Deliverable Forward):**
  - Notional (\(N\)): 6 bilhões de USD
  - FX Contratual (\(F\)): 6.00
  - Spot USDBRL (\(S\)): 5.00
  - Taxa de juros BRL (\(i_{br}\)): 10% ao ano (0.10)
  - Taxa de juros USD (\(i_{us}\)): 2% ao ano (0.02)
  - Dias corridos (\(DC\)): 800 dias
  - Dias úteis (\(DU\)): 550 dias

- **DDI Futuro:**
  - Número de contratos: 120,000
  - Taxa de juros USD (\(i_{us}\)): 2% ao ano (0.02)
  - Spot USDBRL (\(S\)): 5.00
  - Dias corridos (\(DC\)): 800 dias

- **DI1 Futuro:**
  - Número de contratos: 360,000
  - Taxa de juros BRL (\(i_{br}\)): 10% ao ano (0.10)
  - Dias úteis (\(DU\)): 550 dias

---

### Fórmulas Gerais

#### 1. **NDF (Non-Deliverable Forward):**
O preço unitário (PU) do NDF é dado por:

$$
PU_{NDF} = \frac{N}{1 + i_{us} \cdot \frac{DC}{360}} \cdot S - \frac{N - F}{(1 + i_{br})^{DU/252}}
$$

- **DV01 para \(i_{br}\) (taxa de juros BRL):**

$$
DV01_{i_{br}}^{NDF} = -\frac{(N - F) \cdot \frac{DU}{252}}{(1 + i_{br})^{DU/252 + 1}} \cdot 0.0001
$$

- **DV01 para \(i_{us}\) (taxa de juros USD):**

$$
DV01_{i_{us}}^{NDF} = -\frac{N \cdot S \cdot \frac{DC}{360}}{(1 + i_{us} \cdot \frac{DC}{360})^2} \cdot 0.0001
$$

---

#### 2. **DDI Futuro:**
O preço unitário (PU) do DDI Futuro é dado por:

$$
PU_{DDI} = \frac{50000}{1 + i_{us} \cdot \frac{DC}{360}} \cdot S
$$

- **DV01 para \(i_{us}\) (taxa de juros USD):**

$$
DV01_{i_{us}}^{DDI} = -\frac{50000 \cdot S \cdot \frac{DC}{360}}{(1 + i_{us} \cdot \frac{DC}{360})^2} \cdot 0.0001 \cdot \text{Número de contratos}
$$

---

#### 3. **DI1 Futuro:**
O preço unitário (PU) do DI1 Futuro é dado por:

$$
PU_{DI1} = \frac{100000}{(1 + i_{br})^{DU/252}}
$$

- **DV01 para \(i_{br}\) (taxa de juros BRL):**

$$
DV01_{i_{br}}^{DI1} = -\frac{100000 \cdot \frac{DU}{252}}{(1 + i_{br})^{DU/252 + 1}} \cdot 0.0001 \cdot \text{Número de contratos}
$$

---

### Resultados Calculados com Valores Arbitrários

#### 1. **NDF:**
- **DV01 para \(i_{br}\):**

$$
DV01_{i_{br}}^{NDF} \approx -964,000 \text{ BRL}
$$

- **DV01 para \(i_{us}\):**

$$
DV01_{i_{us}}^{NDF} \approx -612,000 \text{ BRL}
$$

---

#### 2. **DDI Futuro:**
- **DV01 para \(i_{us}\):**

$$
DV01_{i_{us}}^{DDI} \approx -612,000 \text{ BRL}
$$

---

#### 3. **DI1 Futuro:**
- **DV01 para \(i_{br}\):**

$$
DV01_{i_{br}}^{DI1} \approx -5,790,000 \text{ BRL}
$$

---

### Resultado Total do Portfólio

O DV01 total do portfólio é a soma dos DV01 de todos os componentes:

$$
DV01_{total} = \left( DV01_{i_{br}}^{NDF} + DV01_{i_{br}}^{DI1} \right) + \left( DV01_{i_{us}}^{NDF} + DV01_{i_{us}}^{DDI} \right)
$$

Substituindo os valores calculados:

$$
DV01_{total} = \left( -964,000 + (-5,790,000) \right) + \left( -612,000 + (-612,000) \right)
$$

$$
DV01_{total} = -6,754,000 + (-1,224,000)
$$

$$
DV01_{total} \approx -7,978,000 \text{ BRL}
$$

---

### Interpretação:
- O portfólio tem um **DV01 total de aproximadamente -7,978,000 BRL**.
- Isso significa que, para um aumento de **0,01% (1 ponto base)** nas taxas de juros BRL e USD, o valor do portfólio diminui em aproximadamente **7,978,000 BRL**.

---

## 2. Explicação sobre a Multiplicação por 0,0001

A multiplicação por **0,0001** é feita porque o **DV01** mede a mudança no valor de um instrumento ou portfólio para uma variação de **1 ponto base** na taxa de juros. Um ponto base equivale a **0,01%**, ou seja:

$$
1 \text{ ponto base} = 0,01\% = 0,0001 \text{ (em decimal)}
$$

Portanto, para calcular o DV01, multiplicamos a derivada do preço em relação à taxa de juros por **0,0001**:

$$
DV01 = \frac{\partial PU}{\partial i} \cdot 0,0001
$$

Isso converte a sensibilidade do preço (em termos de mudança infinitesimal) para a mudança no preço correspondente a **1 ponto base**.

---

### Exemplo Numérico:
No caso do **DI1 Futuro**, se a derivada \(\frac{\partial PU}{\partial i_{br}}\) for calculada como \(-21.825.000\), então:

$$
DV01_{i_{br}} = -21.825.000 \cdot 0,0001 = -2.182,5 \text{ BRL}
$$

Isso significa que, para um aumento de **1 ponto base** na taxa de juros BRL, o preço do DI1 Futuro diminui em **2.182,5 BRL**.

---

### Resumo:
- **0,0001** é o fator de escalonamento que converte a sensibilidade do preço (derivada) para a mudança no preço correspondente a **1 ponto base**.
- # Respostas do Chat

## 1. Cálculo do DV01 para o Portfólio do Scotiabank Brasil

### Dados do Portfólio:
- **NDF (Non-Deliverable Forward):**
  - Notional (\(N\)): 6 bilhões de USD
  - FX Contratual (\(F\)): 6.00
  - Spot USDBRL (\(S\)): 5.00
  - Taxa de juros BRL (\(i_{br}\)): 10% ao ano (0.10)
  - Taxa de juros USD (\(i_{us}\)): 2% ao ano (0.02)
  - Dias corridos (\(DC\)): 800 dias
  - Dias úteis (\(DU\)): 550 dias

- **DDI Futuro:**
  - Número de contratos: 120,000
  - Taxa de juros USD (\(i_{us}\)): 2% ao ano (0.02)
  - Spot USDBRL (\(S\)): 5.00
  - Dias corridos (\(DC\)): 800 dias

- **DI1 Futuro:**
  - Número de contratos: 360,000
  - Taxa de juros BRL (\(i_{br}\)): 10% ao ano (0.10)
  - Dias úteis (\(DU\)): 550 dias

---

### Fórmulas Gerais

#### 1. **NDF (Non-Deliverable Forward):**
O preço unitário (PU) do NDF é dado por:

$$
PU_{NDF} = \frac{N}{1 + i_{us} \cdot \frac{DC}{360}} \cdot S - \frac{N - F}{(1 + i_{br})^{DU/252}}
$$

- **DV01 para \(i_{br}\) (taxa de juros BRL):**

$$
DV01_{i_{br}}^{NDF} = -\frac{(N - F) \cdot \frac{DU}{252}}{(1 + i_{br})^{DU/252 + 1}} \cdot 0.0001
$$

- **DV01 para \(i_{us}\) (taxa de juros USD):**

$$
DV01_{i_{us}}^{NDF} = -\frac{N \cdot S \cdot \frac{DC}{360}}{(1 + i_{us} \cdot \frac{DC}{360})^2} \cdot 0.0001
$$

---

#### 2. **DDI Futuro:**
O preço unitário (PU) do DDI Futuro é dado por:

$$
PU_{DDI} = \frac{50000}{1 + i_{us} \cdot \frac{DC}{360}} \cdot S
$$

- **DV01 para \(i_{us}\) (taxa de juros USD):**

$$
DV01_{i_{us}}^{DDI} = -\frac{50000 \cdot S \cdot \frac{DC}{360}}{(1 + i_{us} \cdot \frac{DC}{360})^2} \cdot 0.0001 \cdot \text{Número de contratos}
$$

---

#### 3. **DI1 Futuro:**
O preço unitário (PU) do DI1 Futuro é dado por:

$$
PU_{DI1} = \frac{100000}{(1 + i_{br})^{DU/252}}
$$

- **DV01 para \(i_{br}\) (taxa de juros BRL):**

$$
DV01_{i_{br}}^{DI1} = -\frac{100000 \cdot \frac{DU}{252}}{(1 + i_{br})^{DU/252 + 1}} \cdot 0.0001 \cdot \text{Número de contratos}
$$

---

### Resultados Calculados com Valores Arbitrários

#### 1. **NDF:**
- **DV01 para \(i_{br}\):**

$$
DV01_{i_{br}}^{NDF} \approx -964,000 \text{ BRL}
$$

- **DV01 para \(i_{us}\):**

$$
DV01_{i_{us}}^{NDF} \approx -612,000 \text{ BRL}
$$

---

#### 2. **DDI Futuro:**
- **DV01 para \(i_{us}\):**

$$
DV01_{i_{us}}^{DDI} \approx -612,000 \text{ BRL}
$$

---

#### 3. **DI1 Futuro:**
- **DV01 para \(i_{br}\):**

$$
DV01_{i_{br}}^{DI1} \approx -5,790,000 \text{ BRL}
$$

---

### Resultado Total do Portfólio

O DV01 total do portfólio é a soma dos DV01 de todos os componentes:

$$
DV01_{total} = \left( DV01_{i_{br}}^{NDF} + DV01_{i_{br}}^{DI1} \right) + \left( DV01_{i_{us}}^{NDF} + DV01_{i_{us}}^{DDI} \right)
$$

Substituindo os valores calculados:

$$
DV01_{total} = \left( -964,000 + (-5,790,000) \right) + \left( -612,000 + (-612,000) \right)
$$

$$
DV01_{total} = -6,754,000 + (-1,224,000)
$$

$$
DV01_{total} \approx -7,978,000 \text{ BRL}
$$

---

### Interpretação:
- O portfólio tem um **DV01 total de aproximadamente -7,978,000 BRL**.
- Isso significa que, para um aumento de **0,01% (1 ponto base)** nas taxas de juros BRL e USD, o valor do portfólio diminui em aproximadamente **7,978,000 BRL**.

---

## 2. Explicação sobre a Multiplicação por 0,0001

A multiplicação por **0,0001** é feita porque o **DV01** mede a mudança no valor de um instrumento ou portfólio para uma variação de **1 ponto base** na taxa de juros. Um ponto base equivale a **0,01%**, ou seja:

$$
1 \text{ ponto base} = 0,01\% = 0,0001 \text{ (em decimal)}
$$

Portanto, para calcular o DV01, multiplicamos a derivada do preço em relação à taxa de juros por **0,0001**:

$$
DV01 = \frac{\partial PU}{\partial i} \cdot 0,0001
$$

Isso converte a sensibilidade do preço (em termos de mudança infinitesimal) para a mudança no preço correspondente a **1 ponto base**.

---

### Exemplo Numérico:
No caso do **DI1 Futuro**, se a derivada \(\frac{\partial PU}{\partial i_{br}}\) for calculada como \(-21.825.000\), então:

$$
DV01_{i_{br}} = -21.825.000 \cdot 0,0001 = -2.182,5 \text{ BRL}
$$

Isso significa que, para um aumento de **1 ponto base** na taxa de juros BRL, o preço do DI1 Futuro diminui em **2.182,5 BRL**.

---

### Resumo:
- **0,0001** é o fator de escalonamento que converte a sensibilidade do preço (derivada) para a mudança no preço correspondente a **1 ponto base**.
- O DV01 é uma medida padronizada e amplamente utilizada em finanças para quantificar o risco de taxa de juros.