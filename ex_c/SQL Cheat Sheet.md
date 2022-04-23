### _Query from a table:_
```sql
 SELECT  col   FROM  tb
```
```sql
 SELECT  col  FROM  tb  WHERE  cond
```
```sql
 SELECT   DISTINCT  col  FROM  tb  WHERE  cond
```
```sql
 SELECT  col   FROM  tb  ORDER BY  col  ASC/DESC 
```
```sql
 SELECT  col   FROM  tb  LIMIT  num
```
```sql
 SELECT  col ,   AGG (coln)  FROM  tb   GROUP BY  col
```
 ```sql
 SELECT  col ,   AGG (coln)  FROM  tb
 GROUP BY  col  HAVING  cond
```
```sql
SELECT DATE(payment_date) FROM payment
```
---
### _Using operators_
```sql
 SELECT  col  FROM  tb  WHERE (cond);
```
```sql
 SELECT  col  FROM  tb  WHERE  col  BETWEEN  n  AND  m;
```
```sql
SELECT * FROM calendar
WHERE dates
BETWEEN '2001-02-01' AND '2001-02-28'
```
```sql
SELECT col FROM tb WHERE c1 [NOT] [I]LIKE pattern;
```
```sql
SELECT col FROM tb WHERE col NOT IN value_list;
```
```sql
SELECT col FROM tb WHERE col IS [NOT] NULL;
```

#### Aggregate functions
```sql
AVG()
```
```sql
COUNT()
```
```sql
SUM()
```
```sql
MAX()
```
```sql
MIN()
```



