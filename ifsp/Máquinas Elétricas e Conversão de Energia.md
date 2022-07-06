# Máquinas Elétricas e Conversão de Energia
Ref: Fitzgerald e Kingsley, 7a ed.
e adendos das aulas do prof. Paulo Dainez

> ## Pesquisar
> - [ ] Equações de Maxwell
> > - termo de corrente de deslocamento
> - [ ] Sobre a orientação dos grãos/domínios magnéticos
> - [ ] Curva de esterésia

> ## Lembretes
> - Campo magnético se refere à dois
> campos vetoriais relacioonados mas distintos:
> o campo **H** se refere à intensidade do
> campo magnético (ampere por metro, $A/m$);
> e o campo **B** se refere à densidade do fluxo
> magnético (tesla, $kg/s^2$)
>
> $$\mu_{0} = 4\pi \times 10^{-7} H/m$$



> "Praticamente todos os transformadores e
máquinas elétricas usam material
ferromagnético para direcionar e
atuam como meio de transferência e conversão
dar forma a campos magnéticos, os quais
atuam como meio de transferência e conversão
de energia. Materiais magnéticos permanentes,
ou ímãs, também são muito usados." (pág. 2)


> "As técnicas de análise de circuitos magnéticos
representam aproximações algébricas das soluções
exatas da teoria de campo." (pág. 2)


O termo de corrente de deslocamento, quando
ignorado, relaciona os campos magnéticos às
correntes que os produzem. Originalmente, esse
termo -- que é associado à radiação eletromagnética
-- é responsável pelos campos magnéticos produzidos
por campos elétricos que variam no tempo. Com
o desprezo desse termo, temos equações da forma
magnética (quase estática) relacionada às correntes
que a produz.

$$
\text{1.1: } \oint _C Hdl = \int _S J\cdot da\\
\text{1.2: } \oint _S B\cdot da = 0
$$

(1.1) é conhecida como Lei de Amperè: A integral de linha de $\boldsymbol{H}$ ao longo de um contorno $C$ fechado, é
igual à corrente total através da superfície $S$
definida por esse contorno.

(1.2) é conhecida como Lei de Gauss dos campos
magnéticos: a densidade do fluxo magnético $\boldsymbol{B}$
é conservada.

> "[...] em muitas aplicações práticas, incluindo a
análise de muitos tipos de máquinas elétricas,
um problema de campo tridimensional pode em
geral ser reduzido ao que é essencialmente um
circuito equivalente unidimensional, dando
soluções de exatidão aceitável em engenharia."
> (pág. 2)

Núcleo magnético -> estrutura composta de material:
- **diamagnético** : $\mu_r<1(\approx 1)$
> cobre, carbono, ouro, mercúrio, chumbo
- **paramgnético** : $\mu_r>1(\approx 1)$
> alumínio, cromo, potássio, manganês
- **ferromagnético** : $\mu_r >1 (10^2<\mu_r<10^6)$
> ferro, ligas de ferro com cobalto, tungstênio, níquel
> ligas de oxido como $CrO_2$, $Fe_3O_4$
> > possibilitam a obtenção de elevada densidade
> >  de fluxo, a delimitação e orientação dos campos
> > compostos por domínios (?)

"Para circuitos magnéticos não há isolação magnética."
-- Prof. Dainez

$\mu_r$: permeabilidade magnética relativa à $\mu_0$

*_Força magnetomotriz_* ($\mathcal{F}$ FMM) = _N i_ ou $A\cdot e$
sendo _N_ o número de espiras e _i_ a corrente, ou A,
amperés e _e_ o número de espiras.

> "[...] os transformadores e a maioria das
máquinas rotativas têm no mínimo dois enrolamentos,
e _N i_ deve ser substituído pela soma algébrica
dos ampères-espiras de todos os enrolamentos." pág. 3

O fluxo magnético líquido $\phi$ (weber, $Wb$)
que atravessa uma superfície S é a integral
de superfície da componente normal de B; assim
$$\text{1.3: }\phi = \int_{S} B\cdot da$$

Num circuiro em que se assume que densidade (e intensidade
de campo magnético) de fluxo magnético seja uniforme em
qualquer reta ao longo do núcleo,  pode-se reduzir a
equação 1.3 à
$$\text{1.4: }\phi = B_c A_c$$
em que

$\phi$ = fluxo no núcleo
$B_c$ = densidade do fluxo no núcleo
$A_c$ = área da seção reta do núcleo

A relação entre a FMM em um circuito magnético e
$\boldsymbol{H}$ é dada por
$$\text{1.5: }\mathcal{F}=N\space i = \oint \boldsymbol{Hdl}$$

E considerando o comprimento de qualquer linha de fluxo
como aproximadamente o comprimento médio do núcleo $I_c$,
pode se simplificar a equação 1.5 como o produto escalar
do módulo de $\boldsymbol{H}$ vezes $I_c$, logo
$$\text{1.6: } \mathcal{F} = N_i = H_c I_c$$
em que $H_c$ é o módulo médio de $\boldsymbol{H}$

> "Em geral, a queda de FMM em um determinado segmento
> de um circuito magnético pode ser calculada como sendo
> $\int \boldsymbol{Hdl}$
> aplicada a esse trecho do circuito magnético." -- pág. 4




