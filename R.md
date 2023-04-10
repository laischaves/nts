Importar CSV:
```R
tabela <- read.csv("path/file.csv", header = TRUE, sep = ";")
```

Frequência: 
```R
 table(tabela$COLUNA)
```

Frequência relativa: Ocorrências/Observações

```R
coluna_solta <- table(tabela$COLUNA)
freq_relativa <- coluna_solta / sum(coluna_solta)
```

Média, mediana, moda:
```R
mean(tabela$COLUNA)
median(tabela$COLUNA)
mode(tabela$COLUNA)
```

Sumário (retorna mínimo, máx, média, mediana, valores em branco):
```R
summary(tabela)
summary(tabela$COLUNA)
```

Ignorar valores em branco (NA):
```R
# colocar no parenteses da função na.rm = TRUE
# exemplo
mean(tabela$COLUNA, na.rm = TRUE)
```

Variancia:
```R
var(tabela$COLUNA, na.rm = TRUE)
```

Desvio padrão:

```R
sd(tabela$COLUNA, na.rm = TRUE)
```

Coeficiente de variação:
```R
coef_var <- mean(tabela$COLUNA)/sd(tabela$COLUNA)
```

Boxplot horizontal:
```R
# Simples
boxplot(tabela$COLUNA, horizontal = TRUE)

# ggplot2
ggplot(tabela, aes(x=as.factor(COL1), y=COL2)) + 
    geom_boxplot(fill="slateblue", alpha=0.2) + 
    xlab("Titulo do eixo x")
```

Covariância:
```R
cov(tabela$COLUNA1, tabela$COLUNA2)
```

Coeficiente de correlação:
```R
cor(tabela$COLUNA1, tabela$COLUNA2)
```

Scatterplot (gráfico de pontinhos?):
```R
# Simples
plot(x=tabela$COLUNA1, y=tabela$COLUNA2
	xlab="Nome do eixo X", ylab="Nome do eixo Y",
	main="Titulo do gráfico"
	)
# ggplot2
> ggplot(tabela, aes(x=COLUNA1, y=COLUNA2)) + 
+     geom_point()
```

Gráfico de barras:
```R
> ggplot(tabela, aes(x=COLUNA1, y=COLUNA2)) + 
+     geom_bar(stat = "identity", na.rm = TRUE)
```

