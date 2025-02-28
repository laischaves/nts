# Power Electronics

#### Search
- [ ] Joule Effect
- [ ] Efeito Pericular
- [x] Tiristor
- [ ] Série de Fourier

Book reference: Rashid, Eletrônica de Potência

---
### Parâmetros e termos básicos
- Chopper: conversor CC-CC, regulador chaveado
- Retificador: CA-CC
- Inversor: CC-CA
- Controlador de tensão CA: CA-CA
- $\delta$: ciclo de trabalho, razão cíclica
- $T$: período de operação do transistor
-  Tensão direta de ruptura ($V_{BO}$)
- Máxima tensão reversa ($V_{BR}$)
- Máxima corrente de anodo ($I_{amax}$)
- Máxima temperatura de operação ($T_{jmax}$)
- Resistência térmica ($R_th$)
- Característica I2t
- Máxima taxa de crescimento da tensão direta $V_ak$ ($dv/dt$)
- Máxima taxa de crescimento da corrente de anodo ($di/dt$)
- Corrente de manutenção de condução ($I_H$)
- Corrente de disparo ($I_L$)
- Tempo de disparo ($t_{on}$)
- Tempo de desligamento ($t_{off}$)
- Corrente de recombinação reversa ($I_{rqm}$)

---

Não tem como construir um transformador de partes mecânicas, a indução precisa da variação eletromagnéticas. 

As características fundamentais de um sinal alternado são: valor médio nulo, frequência constante, intensidade e direção que variam periodicamente.

A eletricidade é um vetor; serve para a transmissão de força, pois é quase sem perdas.

Um dinâmo é um gerador de corrente contínua.

Conversão de energia mecânica em elétrica: gerador.
Conversão de energia elétrica em mecânica: transformador.

Perdas por efeito joule são perdas na transmissão por dissipação de calor.

Frequência e impedância são relacionadas, mudar a frequência altera a impedância. 

Motores de corrente contínua são mais fáceis de controlar a velocidade. É possível (e melhor) usar motores de indução, trifásicos, com inversores de frequências.


- Diodo de potência:
	- Polarização direta: conduz.
	- Polarização reversa: aumento na barreira de depleção.
	- Como todos os dispositivos semicondutores, possui capacitância interna.

| Tiristor                         | BJT, MOSFET, IGBT, SIT           |
| -------------------------------- | -------------------------------- |
| potência maior, frequência menor | potência menor, frequência maior |

Conversor: possui tiristor em sua composição.
Retificador: possui diodo em sua composição.


- Tiristor:
	- Usados para controle de potência.
	- Baixa queda de tensão em condução; importante para que não haja perda de potência.
	- Comutação natural = pela rede: polarização direta.
	- Conduz (diretamente polarizado) ao receber um sinal no gate (G).
	- Manter o sinal no gate pode resultar em perda de potência desnecessária.
	- Quando for diretamente polarizado irá conduzir até que seja reversamente polarizado.
	- Quanto maior a corrente no gate, menor a tensão necessária para entrar em condução.
	- Tensão de ruptura: tensão que ativa a condução do dispositivo sem usar o gate (o que diminui a vida útil deste).

$V_{o(MED)} = 2 V_m/\pi$

$V_{o(MED)}=t_1V_s/T=\delta$