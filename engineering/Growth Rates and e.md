# Growth rates and  $e$

What is $e$?
> Euler's number, $e$, is the base rate of growth shared by all *continually growing* processes.
> 
> It allows for the analysis of continuous growth, at any point in time.
> 
> Every rate of growth can be considered a scaled version of $e$.


Growth can be written as $(1+y\%)^x$, with y% being the percentage of return at the end of the process. However, when working with *compound growth*, i.e. growth that is continuous, not instantaneous, the equation will look like:
$$e = \lim_{n\to\infty}(1+\frac{1}{n})^n \approx 2.718 \rightarrow e $$
That means that $e$ will be the *maximum possible result* when compounding 100% growth for *one time period*, as each little fraction of time will create a dividend that starts to grow on its own, i.e. growth on growth.

$$e = 1 \text{ (original value)} + 1 \text{ (direct growth)} + .718\dots \text{ (compound growth)} $$
When dealing with different growth rates, we work similarly:

Consider a 50% growth annually with an initial investment of $1 and one year split into 50 chunks of time:

$$(1+\frac{50\% \text{ (growth)}}{50 \text{ (time)}})^{50} = (1+0.01)^{50} = 1\% \text{ interest} $$
That means 1% every 50 chunk of time until 50%.

If we did $(1+\frac{100\%}{100})^{100}=1\%$, then calculating the growth rate for both would give us:

$$\begin{align}
&(1+1\%)^{100} \approx e &(1)
\\
&(1+1\%)^{50}=(1+1\%)^{100/2} \approx e^{1/2} &(2)
\end{align}$$
Therefore, we can conclude that
$$(e^{rate})^{time}=e^{rate\cdot time} $$
Example:

10 years of 3% interest is equivalent of 1 year of 30% (and no growth afterwards).

10 years of 3% = 30 changes of 1% = 3% per year, whilst 1 year of 30% means 30 changes of 1% in a single year. Thus, the same change happens in both, with time being the only difference: $e^{0.3}$.


#### Example problem:
Considering the two following affirmations:  
- Knowledge doubles every 17 years  
- 90% of all scientists who ever lived are alive now  
And considering them proportional to each other, explain the formulas:  

$y(t) = ae^{bt} = \text{number of scientists at any time } t$
$k = \text{constant of proportionality}$

$$
\frac{1}{2} = \frac{\int_{-\infty}^{T-17} kae^{bt} \, dt}{\int_{-\infty}^{T} kae^{bt} \, dt} = e^{-17b}
$$  

Considering the average lifespan being 55 years:  

$$
\frac{\int_{-\infty}^{T-55} kae^{bt} \, dt}{\int_{-\infty}^{T} kae^{bt} \, dt} = 1 - e^{-55b}
$$

###### How does it become $1 - \left(\frac{1}{2}\right)^{55/17}$?


The formula $y(t) = ae^{bt}$ represents the exponential growth of the number of scientists at time$ t$, where:  

- $a$ is the scaling constant (starting value),  
- $b$ is the growth rate.  

The doubling rule states that the knowledge (or scientific contributions) doubles every 17 years. Mathematically, this means:

$$
y(t + 17) = 2 \cdot y(t)
$$

From this, we derive the growth rate$ b$:  

$$
y(t + 17) = ae^{b(t + 17)} = 2 \cdot ae^{bt}
$$

Cancel $ae^{bt}$ on both sides:  

$$
e^{17b} = 2 \implies b = \frac{\ln(2)}{17}
$$

Now let’s analyze the second part, which concerns the lifespan of scientists. The integral expressions calculate the proportion of cumulative scientists active before certain times.

For the 55-year lifespan:  

$$
\frac{\int_{-\infty}^{T-55} kae^{bt} \, dt}{\int_{-\infty}^{T} kae^{bt} \, dt} = 1 - e^{-55b}
$$

We express  $e^{-55b}$ in terms of$ e^{-17b}$:  

$$
e^{-55b} = \left(e^{-17b}\right)^{\frac{55}{17}}
$$

Using  $e^{-17b} = \frac{1}{2}$, we find:

$$
e^{-55b} = \left(\frac{1}{2}\right)^{\frac{55}{17}}
$$

Thus:

$$
1 - e^{-55b} = 1 - \left(\frac{1}{2}\right)^{\frac{55}{17}}
$$



###### Going further into point 4:

1. **Doubling Rule and Growth Rate**:  
   From  $e^{17b} = 2$, the growth rate is $b = \frac{\ln(2)}{17}$. This captures the idea that the number of scientists doubles every 17 years.

2. **Exponential Growth Function**:  
   The cumulative number of scientists is modeled by$ y(t) = ae^{bt}$, where the integral of$ y(t)$ gives the total contribution over time.

3. **Proportion of Scientists Active Over Time**:  
   The integrals calculate the fraction of scientists active during specific timeframes. For example:  

   $$
   \frac{\int_{-\infty}^{T-17} kae^{bt} \, dt}{\int_{-\infty}^{T} kae^{bt} \, dt} = e^{-17b}
   $$

   Here,  $e^{-17b} = \frac{1}{2}$ represents the fraction of scientists active more than 17 years ago.

4. **Lifespan Transformation**:  
   For the average lifespan of 55 years:  

   $$
   \frac{\int_{-\infty}^{T-55} kae^{bt} \, dt}{\int_{-\infty}^{T} kae^{bt} \, dt} = 1 - e^{-55b}
   $$

   Using the scaling property$ e^{-55b} = \left(e^{-17b}\right)^{\frac{55}{17}}$, and substituting  $e^{-17b} = \frac{1}{2}$, we get:

   $$
   e^{-55b} = \left(\frac{1}{2}\right)^{\frac{55}{17}}
   $$

   So the complement becomes:

   $$
   1 - e^{-55b} = 1 - \left(\frac{1}{2}\right)^{\frac{55}{17}}
   $$



###### **Why express  $e^{55b}$in terms of $17b$?**

To express  $e^{-55b}$ in terms of  $e^{-17b}$, we use the **rule of exponents**:

$$
e^{-55b} = e^{-17b \cdot \frac{55}{17}}
$$

Using the scaling rule   $e^{ka} = (e^a)^k$, we rewrite:

$$
e^{-55b} = \left(e^{-17b}\right)^{\frac{55}{17}}
$$

Now substitute  $e^{-17b} = \frac{1}{2}$:

$$
e^{-55b} = \left(\frac{1}{2}\right)^{\frac{55}{17}}
$$

This step simplifies the expression for the lifespan proportion.



- **How are they the same number?**


The rule of exponents is crucial for scaling time-dependent growth or decay factors. Here’s why:

1. **Exponent Rules**:  
   For any $a, b, k$:  

   $$
   e^{a + b} = e^a \cdot e^b \quad \text{and} \quad e^{ka} = (e^a)^k
   $$

2. **Applying to$ e^{-55b}$**:  
   Since $55 = 17 \cdot \frac{55}{17}$, we decompose$ e^{-55b}$:  

   $$
   e^{-55b} = e^{-17b \cdot \frac{55}{17}}
   $$

   Using $e^{ka} = (e^a)^k$, rewrite as:

   $$
   e^{-55b} = \left(e^{-17b}\right)^{\frac{55}{17}}
   $$

3. **Equivalence**:  
   This transformation is valid because the rules preserve the base and exponent relationship, ensuring the equivalence of $e^{-55b}$ and $\left(e^{-17b}\right)^{\frac{55}{17}}$.


