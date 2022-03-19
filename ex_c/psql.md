---
title: 'SQL Diary 01'
draft: false
---

## My SQL Diary 01 - The Basics


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

Syntax:
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
movies in a table of films rented:

```SQL
SELECT COUNT(rating) FROM film WHERE(rating = 'G');
```

The comparison operators used with WHERE are the common
ones used in programming; =, >, <, >=, <=, != or <>,
AND, OR, NOT. Very intuitive if you know a bit of programming
logic.

Another example, this time looking for a customer's email
address, using their name:

```SQL
SELECT email FROM customer
WHERE first_name = 'Peter'
AND last_name = 'Parker';
```

#### ORDER BY

This command will sort and order rows -- ascending or 
descending -- based on column value*. It can be used
with more than a column as the based value for ordering.

Example ordering movies by rating and title, ascending:

```SQL
SELECT title, rating
FROM film
ORDER BY rating, title ASC;
```

* The column used for sorting does not have to be 
previously selected, but it makes things easier
to understand and visualize.

---

---
title: 'SQL Diary 02'
date: 2022-03-06T11:00:39-03:00
draft: false
---

## My SQL Diary 02 - The Basics

#### LIMIT

The LIMIT command is simple, it limits your query by a specified
number value -- defined by you -- and it can be specially useful
for large tables, when you don't necessary need all of the data.

An example would be a query to know the 5 highest payed actors
of the year:

```SQL
SELECT * FROM payment
ORDER BY year_earning DESC
LIMIT 5;
```








