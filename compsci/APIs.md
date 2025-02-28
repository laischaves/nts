# API

**API** stands for Application Programming Interface.
It allows one piece of software to request data 
from another and receive a response

- CRUD: 
	- Create -> POST
	- Read -> GET
	- Update -> PUT
	- Delete -> DELETE

 ## HTTP Methods

HTTP defines a set of request methods to indicate the purpose of the request and what is expected if the request is successful. 

**GET**: The GET method requests a representation of the specified resource. Requests using GET should only retrieve data and should not contain a request content.

**HEAD**: HEAD method asks for a response identical to a GET request, but without a response body.

**POST**: POST method submits an entity to the specified resource, often causing a change in state or side effects on the server.

**PUT**:  PUT method replaces all current representations of the target resource with the request content.

**DELETE**: DELETE method deletes the specified resource.

**CONNECT**: CONNECT method establishes a tunnel to the server identified by the target resource.

**OPTIONS**: OPTIONS method describes the communication options for the target resource.

**TRACE**: TRACE method performs a message loop-back test along the path to the target resource.

**PATCH**: PATCH method applies partial modifications to a resource.

> **JSON**: JavaScript Object Notation
A format for structuring data
Two main structures: objects (like dictionaries in Python) and arrays (like lists)
Is used to structure data moving through APIs

## FastAPI

> FastAPI: web framework for APIs
> Uvicorn: an ASGI web server implementation for Python
> Pydantic: data validation library

FastAPI generates a **schema** with all your API using the **OpenAPI** standard for defining APIs.

A **schema** is a definition or description of something. Not the code that implements it, but just an abstract description.

In this case, **OpenAPI** is a specification that dictates how to define a schema of your API.

This schema definition includes your API paths, the possible parameters they take, etc.

The term **schema** might also refer to the shape of some data, like a JSON content.

In that case, it would mean the **JSON attributes**, and data types they have, etc.
OpenAPI and JSON Schema

OpenAPI defines an API schema for your API. And that schema includes definitions (or "schemas") of the data sent and received by your API using JSON Schema, the standard for JSON data schemas.

The OpenAPI schema is what powers the two documentation systems included in FastAPI and there are dozens of alternatives that could be added to the application built with it.


```python
from fastapi import FastAPI

@app.get('/')
def root():
    return {'message': 'Hello World'}
```

- ```FastAPI``` is a Python class that provides all the functionality for your API
that inhertis directly from Starlette
- The ```app``` variable will be an 'instance' of the class ```FastAPI```,
it will be the main point of interaction to create the API
- The **path** is the last part of the URL, starting from the first ```/```
and, while building the API, it is the main way to separate 'conserns' and 'resources'
- **Operation** refers to the _HTTP methods_: POST, GET, PUT, DELETE, etc.,
and you can communicate to each path using one or more of these _methods_

> The usual method for specific actions are:
> POST: create data
> GET: read data
> PUT: update data
> DELETE: delete data
> - in OpenAPI each of the HTTP methos is called an _operation_


- The ```@pp.get('/')``` tells FastAPI that the function below is in charge
of handing requests that go to the path ```/``` using a ```get``` operation


> That ```@something``` syntax in Python is called a "decorator".
> You put it on top of a function. Like a pretty decorative hat (I guess that's where the term came from).
> A "decorator" takes the function below and does something with it.
> In our case, this decorator tells FastAPI that the function below corresponds to the path ```/``` with an operation ```get```.
> It is the **path operation decorator**.

- FastAPI doesn't enforce any specific meaning to each operation,
each HTTP method is used merely as a guideline, not a requirement

So in the previous example:
- **path** is ```/```
- **operation** is ```get```
- **function** is function bellow the decorator ```@app.get('/')```

The response (```return```) will be automatically converted to JSON.




## Example code with comments

```python
from fastapi import FastAPI, HTTPException
from pydantic import BaseModel
from typing import List, Optional
from uuid import UUID, uuid4 # lib to generate UUDI numbers


app = FastAPI()

# The objects we're passing throught the API
class Artist(BaseModel):
    id: Optional[UUID] = None
    name: str
    isArtist: bool = False
    grammy: bool = False


artists = [] # the variable that'll store our data


# the decorator for the method POST, the address and the function
# called with POST that in this case will create an entry
@app.post('/artists/', response_model=Artist)
def create_artist(artist: Artist):
    artist.id = uuid4()
    artists.append(artist)
    return artist

# the decorator for the method GET, the address and the function
# that will read all entries
@app.get("/artists/", response_model=List[Artist])
def read_artists():
    return artists

# the decorator for the method GET, the address and the function
# that will read an entry with the associated ID
@app.get('/artists/{artist.id}', response_model=Artist)
def read_artist(artist_id: UUID):
    for artist in artists:
        if artist.id == artist_id:
            return artist
    raise HTTPException(status_code=404, detail='Artist not found')

# the decorator for the method PUT, the address and the function
# that will edit an entry from the database
@app.put('/artists/{artist_id}', response_model=Artist)
def update_artist(artist_id: UUID, artist_update: Artist):
    for idx, artist in enumerate(artists):
        if artist.id == artist_id:
            updated_artist = artist.copy(update=artist_update.dict(exclude_unset=True))
            return updated_artist
    raise HTTPException(status_code=404, detail='Not found!')

# the decorator for the method PUT, the address and the function
# that will delete an entry from the database
@app.delete('/artists/{artist_id}', response_model=Artist)
def delete_artist(artist_id: UUID):
    for idx, artist in enumerate(artists):
        if artist.id == artist_id:
            return artists.pop(idx)

    raise HTTPException(status_code=404, detail='Not found!')


if __name__ == "__main__":
    import uvicorn

    # the server running on 0.0.0.0 and the port 8000
    uvicorn.run(app, host="0.0.0.0", port=8000)
```


### Path Parameters

Path _parameters_ or _variables_ are declared with the same
syntax used by Python to format strings:

```python
@app.get('/items/{item_id}')
async def read_id(item_id):
    return {'item_id': item_id}
```

The _value_ of the path parameter (```item_id```) will be
passed to the function as the argument ```item_id```:

```'/items/123'```

will return:

```{'item_id':'123'}```

The path parameter type can be declared using standard Python
type annotations:

```python
@app.get('/items/{item_id}')
async def read_id(item_id: int):
    return {'item_id': item_id}
```

In this case ```item_id: int```. Using this will allow for builtin
data validation inside FastAPI, which will return an error message
if the request is made with the wrong type of parameter. FastAPI
uses **Pydantic** for this data validation.

Fixed paths must be declared before variable paths, that is, if
a path ```/users/me``` is needed, it must be declared _before_
```/users/{user_id}```, since _path operations are evaluated
in order_. Otherwise, ```/users/me``` would be treated as an
regular value for ```user_id```.

Path operations _cannot be redefined_, since the first path will
always match first, any later redefinition will be ignored.

### Query Parameters

From [<branch.io/glossary/query-parameters/>]:

> Query parameters are a defined set of parameters (key-value pair,
e.g., foo=bar)
> attached to the end of a URL used to provide additional
> information to a web server when making requests. They are an
> important part of the URL that define specific content or
> actions based on the data being passed.

Query parameters are added to a URL preceded by a question mark (?).
To add multiple parameters an ampersand (&) is added in between
them, to form a single query string parameter, e.g.:

<https://example.com/path?name=Branch&products=[Journeys,Email,Universal%20Ads]>

The query parameters in the example are 'name' with the value
'Branch' and 'products' with the value '[Journeys,Email,
Universal%20Ads]'

These parameters are used for API Requests, Deep Linking, Searchs,
Tracking and etc.

<https://www.example.com/search?term=product>

<https://example.com/cards?price=25&location=forks>

In the FastAPi library, when declarion other function parameters
that are not part of the path parameters, they are interpreted
as **query parameters**.

```python
fake_items_db = [{"item_name": "Foo"}, {"item_name": "Bar"}, {"item_name": "Baz"}]


@app.get("/items/")
async def read_item(skip: int = 0, limit: int = 10):
    return fake_items_db[skip : skip + limit]
```

Query parameters can be optional and can have default values.
In the example above, going to ```'/items/'``` would be the
same as going to ```/items/?skip=0&limit=10```.

You could change that to ```/items/?skip=2``` and it be the
same as ```/items/?skip=2&limit=10```.

These parameters can also be optional by setting the default
value to ```None```, e.g.:
```Python
@app.get("/items/{item_id}")
async def read_item(item_id: str, q: str | None = None):
    if q:
        return {"item_id": item_id, "q": q}
    return {"item_id": item_id}
```

In this case, the function parameter ```q``` will be optional,
and will be ```None``` by default.
