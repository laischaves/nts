# Digital Systems

## Keywords and concepts

**Prime implicant**: a product or sum term, which cannot be
further reduced by combination with others.

**Minterm**: the product, the logical _AND_ of a set of variables

**Maxterms**: tne sum, the logical _OR_ of a set of variables

**DATA PATH**: módulo de processamento de dados, para manipulação aritmética e lógica.
**CONTROLADOR**: módulo de decisão.

**VARIÁVEIS tipo CONTROLE**: entradas externas e variáveis de status.

**VARIÁVEIS tipo DADOS**: dados de entrada e de saída.

**RTL**: Register transfer level;  is a design abstraction which models a synchronous digital circuit in terms of the flow of digital signals (data) between hardware registers, and the logical operations performed on those signals.



---
## K-map method
A Karnaugh map, a.k.a. a k-map, is a graphical tool for solving,
or simplifying, boolean functions. It consists of $2^n$ cell for n
variables. The adjacent cells differed by one bit position.

A k-map is most suitable for solving functions of 2 to 5 variables.

2 variable k-map

|yz|0|1|
|---|---|---|
|0|$m_0$|$m_1$|
|1|$m_2$|$m_3$|

or

|yz|00|11|11|10|
|---|---|---|---|---|
|-|$m_0$|$m_1$|$m_3$|$m_2$|


In this scenario, there's only one possibility of
grouping 4 adjacent min terms. There's also four
combinations possible by grouping the terms by 2 min terms.

#### Using a k-map
1. Function: f $W, X, Y, Z = WX'Y' + WY + W'YZ'$
![[dsys_fig_000_kmap.png]]

> Answer: f = $yz'+wx'+wy$


---
## Quine-McCluskey tabular method

The [[Quine-McCluskey Algorithm]] is useful for functions with more than 5
variables, a scenario in which k-maps become cumbersome. The method
is based on the concept of _prime impricants_.

The method is described by the following procedure:


> Step 1 − Arrange the given min terms in an ascending order
> and make the groups based on the number of ones present in
> their binary representations. So, there will be at most ‘n+1’
> groups if there are ‘n’ Boolean variables in a Boolean function
> or ‘n’ bits in the binary equivalent of min terms.

> Step 2 − Compare the min terms present in successive groups.
> If there is a change in only one-bit position, then take the
> pair of those two min terms. Place this symbol ‘-’ in the differed
> bit position and keep the remaining bits as it is.

> Step 3 − Repeat step2 with newly formed terms till we get all prime implicants.

> Step 4 − Formulate the prime implicant table. It consists of set
> of rows and columns. Prime implicants can be placed in row wise
> and min terms can be placed in column wise. Place ‘1’ in the
> cells corresponding to the min terms that are covered in each prime implicant.

> Step 5 − Find the essential prime implicants by observing each
> column. If the min term is covered only by one prime implicant,
> then it is essential prime implicant. Those essential prime
> implicants will be part of the simplified Boolean function.

> Step 6 − Reduce the prime implicant table by removing the row
> of each essential prime implicant and the columns corresponding
> to the min terms that are covered in that essential prime
> implicant. Repeat step 5 for Reduced prime implicant table.
> Stop this process when all min terms of given Boolean function are over.

#### Using the tabular method

1. $f(W,X,Y,Z) = \sum{m(2,6,8,9,10,11,14,15)}$

The given min terms are 2, 6, 8, 9, 10, 11, 14 and 15.
The ascending order of these min terms based on the number
of ones present in their binary equivalent is
2, 8, 6, 9, 10, 11, 14 and 15.


Grouping the minterms by number of 1's:

|group|minterm|wxyz|
|---|---|---|
|g1|2|0010|
|g1|8|1000|
|g2|6|0110|
|g2|9|1001|
|g2|10|1010|
|g3|11|1011|
|g3|14|1110|
|g4|15|1111|

![[dsys_fig_001_quinemc.png]]


## Hardwired Systems Design

A) NÍVEL RTL (Register–Transfer Level)
1. Descrição do algoritmo em fluxograma usando o conceito
de estados;
2. Especificação do DATA PATH usando componentes de uma
biblioteca, ou a serem projetados;
3. Especificação do CONTROLADOR por meio de:
3.1 Diagrama de Estados n