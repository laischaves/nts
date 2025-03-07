## *QUESTÃO 1*

Considere que o Scotiabank Brasil, no dia 26/nov/2024, tem um portfólio de operações locais de: 

- - 6 bilhões de USD de notional de NDF (Non-Deliverable Forward) USDBRL com FXContratual de 6.00 e vencimento em 03/jan/2028.
    
- + 120,000 contratos de DDI Futuro com vencimento em 03/jan/2028
    
- - 360,000 contratos de DI1 Futuro com vencimento em 03/jan/2028

- DI1 Futuro da B3
$$
PU = \frac{ 100000 }{ (1+i_{BR})^{(\frac{DU}{252})}}
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

Sendo: 

PU: Preço Unitário em BRL.

$i_{BR}$: Taxa de juros BRL local

$i_{US}$: Taxa de juros USD local

SpotUSDBRL: Taxa de câmbio à vista USDBRL

DU: Dias úteis de hoje até o vencimento do contrato

DC: Dias corridos de hoje até o vencimento do contrato


  

1. Calcule o valor das derivadas dos PUs em relação aos fatores primitivos (SpotUSDBRL, iUS e iBR) para cada derivativo.
    
2. Calcule quanto seria o resultado do portfólio para variações de +0,01% individualmente para cada taxa de juros (DV01).
    
3. Qual o resultado deste portfólio para dia 27/nov/2024?
    
4. Utilizando a Série de Taylor, qual seria o resultado do portfólio para dia 27/nov/2024?


Vamos detalhar o passo a passo das derivações para cada derivativo, utilizando regras básicas de cálculo diferencial (regra da cadeia, regra do quociente e propriedades de exponenciação).

---
**DI1 Futuro**: Contrato futuro de taxa de juros em reais, baseado na taxa de Depósitos Interfinanceiros (DI).
**DDI Futuro**: Contrato futuro que permite a proteção cambial ao usar taxas de juros em dólares e a taxa de câmbio spot.
**NDF (Non-Deliverable Forward)**: Um contrato a termo de câmbio sem entrega física, liquidado financeiramente com base na diferença entre a taxa contratual e a taxa de mercado.

### **1. DI1 Futuro**
**Fórmula do PU:**  
$$
PU = \frac{100.000}{(1 + i_{br})^{DU/252}}
$$

#### **Derivada em relação a $i_{br}$:**
1. **Reescreva o PU:**  
   $$
   PU = 100.000 \cdot (1 + i_{br})^{-DU/252}
   $$

2. **Aplique a regra da cadeia:**  
   A derivada de $x^n$ é $n \cdot x^{n-1} \cdot \frac{dx}{di_{br}}$, onde $x = 1 + i_{br}$ e $n = -DU/252$.

3. **Calcule:**  
   $$
   \frac{\partial PU}{\partial i_{br}} = 100.000 \cdot \left( -\frac{DU}{252} \right) \cdot (1 + i_{br})^{-(DU/252 + 1)} \cdot 1
   $$
   Simplificando:  
   $$
   \frac{\partial PU}{\partial i_{br}} = -\frac{100.000 \cdot DU}{252} \cdot (1 + i_{br})^{-(DU/252 + 1)}
   $$

#### **Derivadas em relação a $S$ e $i_{us}$:**  
O PU não depende de $S$ ou $i_{us}$, portanto:  
$$
\frac{\partial PU}{\partial S} = 0 \quad \text{e} \quad \frac{\partial PU}{\partial i_{us}} = 0
$$

---

### **2. DDI Futuro**
**Fórmula do PU:**  
$$
PU = \frac{50.000 \cdot S}{1 + i_{us} \cdot \frac{DC}{360}}
$$

#### **Derivada em relação a $S$:**
1. **Derive diretamente:**  
   $i_{us}$, $DC$, e $360$ são constantes em relação a $S$.  
   $$
   \frac{\partial PU}{\partial S} = \frac{50.000}{1 + i_{us} \cdot \frac{DC}{360}}
   $$

#### **Derivada em relação a $i_{us}$:**
2. **Aplique a regra do quociente:**  
   Seja $f = 50.000 \cdot S$ e $g = 1 + i_{us} \cdot \frac{DC}{360}$.  
   $$
   \frac{\partial PU}{\partial i_{us}} = \frac{f' \cdot g - f \cdot g'}{g^2}
   $$

3. **Calcule $f'$ e $g'$:**  
   - $f' = 0$ (já que $f$ não depende de $i_{us}$).  
   - $g' = \frac{DC}{360}$.

4. **Substitua na fórmula:**  
   $$
   \frac{\partial PU}{\partial i_{us}} = \frac{0 \cdot g - 50.000 \cdot S \cdot \frac{DC}{360}}{g^2} = -\frac{50.000 \cdot S \cdot \frac{DC}{360}}{\left(1 + i_{us} \cdot \frac{DC}{360}\right)^2}
   $$

#### **Derivada em relação a $i_{br}$:**  
O PU não depende de $i_{br}$, portanto:  
$$
\frac{\partial PU}{\partial i_{br}} = 0
$$

---

### **3. NDF USDBRL**
**Fórmula do PU:**  
$$
PU = \underbrace{\frac{N \cdot S}{1 + i_{us} \cdot \frac{DC}{360}}}_{\text{Termo 1}} - \underbrace{\frac{N - F}{(1 + i_{br})^{DU/252}}}_{\text{Termo 2}}
$$

#### **Derivada em relação a $S$:**
1. **Derive o Termo 1:**  
   $N$, $i_{us}$, $DC$, e $360$ são constantes em relação a $S$.  
   $$
   \frac{\partial (\text{Termo 1})}{\partial S} = \frac{N}{1 + i_{us} \cdot \frac{DC}{360}}
   $$

2. **Derive o Termo 2:**  
   O Termo 2 não depende de $S$, então:  
   $$
   \frac{\partial (\text{Termo 2})}{\partial S} = 0
   $$

3. **Resultado final:**  
   $$
   \frac{\partial PU}{\partial S} = \frac{N}{1 + i_{us} \cdot \frac{DC}{360}} - 0 = \frac{N}{1 + i_{us} \cdot \frac{DC}{360}}
   $$

#### **Derivada em relação a $i_{us}$:**
4. **Derive o Termo 1:**  
   Aplique a regra do quociente (similar ao DDI Futuro):  
   $$
   \frac{\partial (\text{Termo 1})}{\partial i_{us}} = -\frac{N \cdot S \cdot \frac{DC}{360}}{\left(1 + i_{us} \cdot \frac{DC}{360}\right)^2}
   $$

5. **Derive o Termo 2:**  
   O Termo 2 não depende de $i_{us}$, então:  
   $$
   \frac{\partial (\text{Termo 2})}{\partial i_{us}} = 0
   $$

6. **Resultado final:**  
   $$
   \frac{\partial PU}{\partial i_{us}} = -\frac{N \cdot S \cdot \frac{DC}{360}}{\left(1 + i_{us} \cdot \frac{DC}{360}\right)^2} - 0
   $$

#### **Derivada em relação a $i_{br}$:**
7. **Derive o Termo 1:**  
   O Termo 1 não depende de $i_{br}$, então:  
   $$
   \frac{\partial (\text{Termo 1})}{\partial i_{br}} = 0
   $$

8. **Derive o Termo 2:**  
   Reescreva o Termo 2:  
   $$
   \text{Termo 2} = (N - F) \cdot (1 + i_{br})^{-DU/252}
   $$
   Aplique a regra da cadeia (similar ao DI1 Futuro):  
   $$
   \frac{\partial (\text{Termo 2})}{\partial i_{br}} = (N - F) \cdot \left( -\frac{DU}{252} \right) \cdot (1 + i_{br})^{-(DU/252 + 1)} \cdot 1
   $$
   Simplificando:  
   $$
   \frac{\partial (\text{Termo 2})}{\partial i_{br}} = -\frac{(N - F) \cdot DU}{252} \cdot (1 + i_{br})^{-(DU/252 + 1)}
   $$

9. **Resultado final:**  
   $$
   \frac{\partial PU}{\partial i_{br}} = 0 - \left( -\frac{(N - F) \cdot DU}{252} \cdot (1 + i_{br})^{-(DU/252 + 1)} \right) = \frac{(N - F) \cdot DU}{252} \cdot (1 + i_{br})^{-(DU/252 + 1)}
   $$

---

### **Resumo das Derivadas**
| Derivativo     | $\frac{\partial PU}{\partial S}$                 | $\frac{\partial PU}{\partial i_{us}}$                                                         | $\frac{\partial PU}{\partial i_{br}}$                              |
| -------------- | -------------------------------------------------- | ----------------------------------------------------------------------------------------------- | -------------------------------------------------------------------- |
| **DI1 Futuro** | $0$                                              | $0$                                                                                           | $-\frac{100.000 \cdot DU}{252} \cdot (1 + i_{br})^{-(DU/252 + 1)}$ |
| **DDI Futuro** | $\frac{50.000}{1 + i_{us} \cdot \frac{DC}{360}}$ | $-\frac{50.000 \cdot S \cdot \frac{DC}{360}}{\left(1 + i_{us} \cdot \frac{DC}{360}\right)^2}$ | $0$                                                                |
| **NDF**        | $\frac{N}{1 + i_{us} \cdot \frac{DC}{360}}$      | $-\frac{N \cdot S \cdot \frac{DC}{360}}{\left(1 + i_{us} \cdot \frac{DC}{360}\right)^2}$      | $\frac{(N - F) \cdot DU}{252} \cdot (1 + i_{br})^{-(DU/252 + 1)}$  |

**Observações:**  
10. Para o **NDF**, a derivada em relação a $i_{br}$ é positiva porque o Termo 2 é subtraído na fórmula do PU.  
11. As derivadas são sensíveis aos valores de $DU$, $DC$, $N$, $F$, e as taxas $i_{br}$, $i_{us}$.  
12. A consistência dimensional de $N$ e $F$ (ambos em USD) não foi questionada, conforme a fórmula fornecida.