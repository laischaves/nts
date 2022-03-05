# SQL



### Select from Catalog

Sometimes you're dealing with a new database
on your terminal and need to overview the tables
you're about to work with; a query to help with
this would be

```SQL
SELECT tablename, schemaname, tableowner
FROM pg_catalog.pg_tables
WHERE schemaname != 'pg_catalog'
AND schemaname != 'information_schema'
ORDER BY tablename ASC;
```

and the WHERE clause can be omitted in case
you want to see the system tables as well.

#### DISTINCT

The DISTINCT clause will list -- as it's said
 -- distinct values from a column on a table.

```SQL
SELECT DISTINCT searched_value FROM table_name;
```


#### WHERE and COUNT

The WHERE and COUNT queries are quite useful, the
COUNT being responsable for -- you guessed it -- counting
the number of things, which used with WHERE can be rather
powerful. The WHERE clause can be used to specify 
where to use, for example, the COUNT query;

An example of using the two to find the number of G rated
movies in a table of films rented;

```SQL
SELECT COUNT(rating) FROM film WHERE(rating = 'G');
```

The comparison operators used with WHERE are the common
ones used in programming; =, >, <, >=, <=, != or <>,
AND, OR, NOT. Very intuitive if you know a bit of programming
logic.



```SQL

```

