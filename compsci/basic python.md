---
tags:
  - python
  - programming
  - compsci
---
# Notes from the video

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