# Modelagem de Sistemas

## Definições Iniciais

**Transdutor**: dispositivo de conversão de energiga de uma natureza
para outra, e.g. microfone, termômetro, etc.

Problemas em modelagem de sistemas podem ser classificados em três tipos:

1. Problemas de **Análise**: _saída_ $S$ desconhecida,
_entrada_ $E$ e _sistema_ $Si$ conhecidos;

2. Problemas de **Síntese**: $E$ e $S$ conhecidas, $Si$ a ser
determinado;

3. Problemas de **Medidas**: $Si$ e $S$ conhecidos, $E$ desconhecido ou medido de forma imperfeita ($S$ com distorções).

Tipos de sistemas:
- **Sistema em malha aberta:** não pode realizar compensações para
quaisquer perturbações (que apareçam tanto na entrada quanto na saída);
são comandados unicamente pela entrada.
- **Sistema em malha fechada:** compensa o efeito das perturbações;
apresenta mais precisão que sistemas em malha aberta;
maior complexidade; também conhecidos como sistemas de
_controle com realimentação_.

**Erro ou sinal de atuação:** sinal de saída subraído do sinal de entrada.
**Resposta transistória:** período de tempo que decorre logo após a
aplicação de uma nova entrada ao sistema, no momento em que se dão
grandes variações na saída do processo.
**Resposta em regime permanente:** se assemelha à entrada; é o que,
normalmente, permanece quando a resposta transistória decai a zero.

$$\text{resposta total}^{[3]}=\text{resposta natural}^{[1]}
+\text{resposta forçada}^{[2]}$$

**[1]** Descreve o modo como o sistema dissipa ou obtém energia. Depende
apenas do sistema. _Tende a 0 ou oscila_.
**[2]** Depende da entrada;
**[3]** A resposta transistória também equivale à soma entre natural
e forçada enquanto a total é muito grande.


**Figura 1 Processo de projeto de sistema de controle:**

![figura 1.11 do livro](./images/model_fig_001_processo.png)


## Mechanical Systems
### Elements of mechanical systems:
- **Mass**
- **Inertia**
> $$\sum{F=ma} \rightarrow f(x)=m\cdot \ddot{x}$$ or 
> $$f(x)=m\frac{d^2 x}{dt^2}$$
> For the torque function, for $\theta =$ angular position and $J=$ moment of inertia:
> $$\sum\tau = J \alpha \rightarrow \tau(t)=J\ddot{\theta}$$
> > ![[model_fig_002_element.png]]

- **Springs**
> For a linear spring, with $k=$ stiffness constant, $x=$ position:
> $$f(t)=k(x_2 - x_1)$$
> For rotating spring, with $k=$ stiffness constant, $\theta=$ angular position:
> $$\tau(t)=k(\theta_2 -\theta_1)$$
> > ![[model_fig_003_element.png]]
- **Viscous Dampers**
> Viscous dampers depend on the speed of both ends, with $b$ as the viscous constant:
> $$f(t)=b(\dot{x}_2 - \dot{x}_1)$$
> $$\tau(t)=b(\dot{\theta}_2-\dot{\theta}_1)$$
> > ![[model_fig_004_element.png]]

#### Example

![[model_fig_005_example.png]]

Definitions:
$x=$ displacement; $\dot{x}=$ speed; $\ddot{x}=$ acceleration
$\sum{F=m\ddot{x}}$
Considering down to be $+\downarrow$ positive:
$$F(t)-b\dot{x}-k{x}=m\ddot{x}$$
Given that
$F(t) =$ force downwards on the mass
$-b\dot{x}=$ viscous damper force
$-kx=$ spring force
$m\ddot{x}=$ the  sum of the forces given by Newton's law


## Electrical Systems
### Elements of Electrical Systems
- Resistors
	no inductance or capacitance
	voltage drop: $v = v_1 - v_2 = RI$
- Capacitors
	no resistance or inductance
	$v = v_1 - v_2 = \frac{1}{C}\int{idt}\rightarrow i=C{(\frac{dv}{dt})}$
- Inductors
	no resistance or capacitance
	$v = v_1 - v_2 = L\frac{di}{dt} \rightarrow i = \frac{1}{L}\int{vdt}$ 
> > ![[model_fig_006_element.png]]

![[model_fig_007_comparison.png]]
![[model_fig_008_analogy.png]]

## Laplace Transform
