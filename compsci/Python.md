---
tags:
  - python
  - programming
  - compsci
---
# Python

## Basics

- *variables* are **dynamically** typed
	```python n = 0
	print(n)
	n = 'abc'

	a,b = 'a', 2
	```
- incrementing
	```python
	n = n + 1
	n += 1
	```
- *None* is null
	```python
	a = 4
	a = None
	```
- **if** statements
	```python
	n = 1
	if n > 2:
	    n -= 1
	elif n < 2:
	    n += 2
	else:
	    n *=2
	```
- parenthesis **are needed** for *multiline conditions*
	```python
	n, m = 1, 2
	if ((n > 2 and
	    n != m) or n == m):
	    n += 1
	```
- **while** loops
	```python
	while n < 5:
	    print(n)
	    m += 1
	```
- **for** loops
	```python
	for i in range(5):
	    print(i)
	# OUT: 1 2 3 4 5
	for i in range(2, 6):
	# OUT: 2 3 4 5
	for i in range(5, 1, -1):
	# OUT 5 4 3 2
	```
- math
	*division* is decimal by default, *double slash* rounds down
	```python
	dec_div = 10/3
	round_div = 10//3
	```
	to avoid issues with negative numbers, it is recommended to use the math library
	```python
	import math
	print(math.fmod(-10, 3))
	print(math.sqrt(27))
	```
- *arrays* (called **lists**)
	```python
	arr = [1, 2, 3]
	```
	arrays can be used as stack
	```python
	arr.append(4)
	arr.append(5)
	print(arr)
	# out: 1 2 3 4 5

	arr.pop()
	print(arr)
	# out: 1 2 3 4
	```
	you can insert a value at the middle of the array
	```python
	arr.insert(1, 7)
	```
	you can also index a value
	```python
	arr[0] = 0
	arr[3] = 0

	# out = 0, 7, 2, 0, 4
	```
	inicialize an array of size 5 with all values = 1
	```python
	n = 5
	arr = [1] * n
	print(len(arr))
	# out: 1, 1, 1, 1, 1
	       5
	```
	sublists (slicing)
	```python
	print(arr[1:3])
	print(arr[0:4])
	```
- **looping** through *arrays*
	using *index*
	```python
	for i in range(len(arr)):
		print(arr[i])
	```
	withouth using index
	```python
	for i in arr:
		print(n)
	```
	using enumerate (index and value)
	```python
	for i, n in enumerate(arr):
		print(i, n)
	```
	loop through multiple arrays simultaneously with unpacking

	```python
	arr1 = [1, 2, 3]
	arr2 = [4, 5, 6]

	for y, z in zip(arr1, arr2):
		print(y, z)
	# OUT:
	#	1, 4
	#	2, 5
	#	3, 6
	```
- *sorting*
	the sort() function goes from smaller to bigger automatically, but you can reverse that
	```python
	arr.sort()
	arr.sort(Reverse=True)
	```
	custom sort: you can also sort by length of string
	```python
	arr.sort(key=lambda x: len(x))
	```
	lambda is basically a function without a name, each string will be mapped to their length and the array will be sorted by that parameter

- list comprehension
	adding numbers from 0 to 5 into a list using list comprehension
	```python
	arr = [i for i in range(5)]
	# arr = [0, 1, 2, 3, 4, 5]
	arr = [i+i for i in range(5)]
	# arr = [0, 2, 4, 6, 8]
	```
- 2D lists
	```python
	arr = [[0] * 4 for i in range(4)]
	# arr = [[0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0]]
	```
- strings work similarly to arrays
	```python
	s = "abc"
	print(s[0:1])
	```
	however, strings are *immutable*, so you cannot reassing a character at a specific index
	everytime you modify a string is considered a end time operation
	```python
	# updating a string will create a new string
	s += 'def'
	```
	strings and integers can be converted into each other
	```python
	s = '123'
	print(int(s)+2)
	i = 123
	print(str(i) + '2')
	```
	to get the ASCII value of a string you can use the ord function
	```python
	print(ord("a"))
	```
- tuples
	are like arrays and are immutable, are used mainly as keys for hash maps/sets because lists are not hashable and cant be used as keys
	```python
	tup = (1, 2, 3)
	myMap = {(1,2) : 3}
	```
	```python
	```
- queues (?)
- hashset (?)
- hashmap
- hashtable
- heaps
- **def**
	def is used to create functions
	```python
	def myFunc(n, m):
	    return n * m
	```
- nested functions
- classes

## Simple Functions

- **split()**
    - breaks a string based on set criteria
    - syntax: *string*.split(*separator, maxsplit*)
    - default: separator: any whitespace, maxsplit: all ocurrences
    ```python
    words = "column1 column2 column3"
    words = words.split(" ")
    print(words)
    Output: ['column1', 'column2', 'column3']
    ```
- **enumerate()**
    - returns the length of an interable and loops through its items simultaneously
    - syntax: enumerate(*iterable, start=0*)
    ```python
   arr = ['beyonce', 'taylor', 'ariana']
   for i, j in enumerate(arr):
    print(i, j)
    Output:
    0 beyonce
    1 taylor
    2 ariana
    ```
- **eval()**
    - evaluate mathematical operations even in strings
    ```python
    g = '(4 * 5)/4'
    print(eval(g))
    Output: 5.0
    ```
- **max()** and **min()**
    - returns the *highest* and *lowest ranked* item in an iterable
    ```python
    # highest ranked item in the alphabet
    b = {1:"grape", 2:"apple", 3:"applesss", 4:"zebra", 5:"mango"}
    print(max(b.values()))
    Output: zebra
    a = [1, 65, 7, 9]
    print(max(a))
    Output: 65
    ```
- **map()**
    - allows you to iterate over each item in an iterable, it operates on each item independently
    - allows you to perform mathematical operations on two or more lists
    - allows you to manipulate arrays with any data type
    ```python
    # find the sum of two lists
    b = [1, 3, 4, 6]
    a = [1, 65, 7, 9]

    # declare a separate function to handle the addition:</strong>
    def add(a, b):
     return a+b

    # pass the function and the two lists into the built-in map() function:</strong>
    a = sum(map(add, b, a))
    print(a)
    Output: 96
    ```
- **getattr()**
    - returns the attribute of an object. It accepts two parameters: the class and the target attribute name
    ```python
    class ty:
     def __init__(self, number, name):
     self.number = number
     self.name = name

    a = ty(5*8, "Idowu")

    b = getattr(a, 'name')
    print(b)

    Output: Idowu
    ```
- **append()**
    - writes new data into a list without overwriting previous content
    ```python
    nums = [1, 2, 3]
    appendedlist = [2, 4]
    for i in nums:
     a = i*3
     appendedlist.append(a)
    print(appendedlist)

    Output: [2, 4, 3, 6, 9]
    ```
- **range()**
    - represents an immutable sequence of numbers and is commonly used for looping a specific number of times in for loops
    - syntax: range(*start, stop, step*)
    - testing range objects for equality with == and != compares them as sequences
    ```python
    list(range(0, 10, 3))
    Output: [0, 3, 6, 9]
    list(range(0, -10, -1))
    Output: [0, -1, -2, -3, -4, -5, -6, -7, -8, -9]
    list(range(0))
    Output: []
    list(range(1, 0))
    Output: []
    ```
- **format()**
    - used to manipulate string output
    - syntax: format(*value, format_spec=''*)
    ```python
    name = "Ram"
    age = 22
    message = "My name is {0} and I am {1} years \
                        old. {1} is my favorite \
                        number.".format(name, age)
    print(message)

    txt = "I have {an:.2f} Rupees!"
    print(txt.format(an = 4))
    ```
- **strip()**
    - removes *leading* characters from a string
    - syntax: strip(*string*)
    - it repeatedly removes the first character from the string, if it matches any of the supplied characters; if you don't specify a character, strip removes all leading whitespace characters from the string
    ```python
    st = " Python tutorial"
    st = st.strip(" P")
    print(st)
    Output: ython tutorial
    ```
- **sorted()**
    - arrenges values in descending or ascending order
    - syntax: sorted(*iterable, key*)
    ```python
    f = {1, 4, 9, 3} # Try it on a set
    sort = {"G":8, "A":5, "B":9, "F":3} # Try it on a dictionary
    print(sorted(f, reverse=True)) # Descending
    print(sorted(sort.values())) # Ascending (default)

    Output:
    [9, 4, 3, 1]
    [3, 5, 8, 9]
    ```
- **join()**
    - merges string items in a list
    - syntax: *string_name*.join(*iterable*)
    ```python
    # Joining with empty separator
    list1 = ['g', 'e', 'e', 'k', 's']
    print("".join(list1))

    # Joining with string
    list1 = " geeks "
    print("$".join(list1))
    Output:
    geeks
    $g$e$e$k$s$
    ```
- **replace()**
    - used to replace parts of a string
    - syntax: replace(*initial_string, replacing_string*)
    ```python
    columns = ["Cart_name", "First_name", "Last_name"]
    for i in columns:
     i = i.replace("_", " ")
     print(i)

    Output:
    Cart name
    First name
    Last name
    ```
-

## Libraries

### typing

The ```typing``` module provides runtime support for type hints.

From [docs.python.org]:

Consider the function below:

```python
def surface_area_of_cube(edge_length: float) -> str:
    return f"The surface area of the cube is {6 * edge_length ** 2}."
```
The function ```surface_area_of_cube``` takes an argument expected to be
an instance of ```float```, as indicated by the type hint ```edge_length: 
float```. The function is expected to return an instance of ```str```, as 
indicated by the ```-> str``` hint.

While type hints can be simple classes like float or str, they can also be more complex. 
The typing module provides a vocabulary of more advanced type hints.

### FastAPI

From [<fastapi.tiagolo.com>]:

FastAPI is a modern, fast (high-performance), web
framework for building [[API]]s with Python based on
standard Python type hints.

FastAPI depends on Pydantic and Starlette

> Pydantic: data validation library
> Uvicorn: an ASGI web server implementation for Python

```python
from fastapi import FastAPI

@app.get('/')
def root():
    return {'message': 'Hello World'}

if __name__ == '__main__':
    import uvicorn

    uvicorn.run(app, host='0.0.0.0', port=8000)
```

- ```FastAPI``` is a Python class that provides all the 
functionality for your API that inhertis directly from Starlette
- The ```app``` variable will be an 'instance' of the class ```FastAPI```

### Uvicorn

For servers that load and serves applications.

```python
if __name__ == '__main__':
    import uvicorn

    uvicorn.run(app, host='0.0.0.0', port=8000)
```


