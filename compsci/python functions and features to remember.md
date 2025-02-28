---
tags:
  - python
  - programming
---
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
    ```python

    ```
-
    ```python

    ```

