---
tags:
  - compsci
  - programming
---
This is a reminder cheat sheet that may or may not be updated in the future.
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
```SQL
SELECT col AS new_name FROM table
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

### _JOINs_
 **INNER JOIN**: match in both tables
```SQL
SELECT * FROM table1
INNER JOIN table2
ON table1.col_match = table2.col_match;
```
**(FULL) OUTER JOIN**: all records in both tables, matching where is possible (else, null cell)
```SQL
SELECT * FROM table1
FULL OUTER JOIN table2
ON table1.col = table2.col;
``` 
**LEFT OUTER JOIN**: all from table1 and matches on table2 (when existing, else, null)
```SQL
SELECT * FROM table1
LEFT OUTER JOIN table2
ON table1.col = table2.col;
```
*Exclusive* **Left Join**:
```SQL
SELECT * FROM table1
LEFT OUTER JOIN table2
ON table.col = table2.col
WHERE table2.col IS NULL; 
```
**RIGHT OUTER JOIN**: all from table2 and matches on table1 (when existing, else, null)
```SQL
SELECT * FROM table1
LEFT OUTER JOIN table2
ON table1.col = table2.col;
```
**UNION**: combine the result-set of two or more SELECT statements; basically, direct concatenation; they should match up tho
```SQL
SELECT col_names FROM table1
UNION
SELECT col_names FROM table2;
```