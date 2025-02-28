```Python
from fastapi import FastAPI
from pydantic import BaseModel
from typing import List, Optional
import uvicorn

app = FastAPI()

class File(BaseModel):
	name: str
	ext: str
	size: int
	id: Optional[UUDI] = Non@

folder = []

@app.post('/files/', response_model=File)
def create_file(file: File):
	folder.append(file)
	return file

@app.get('/files/', response_model=List[File])
def list_files():
	return folder

@app.get('/files/{file.id}):
def list_file(file_id: UUID):
	for file in folder:
		if file.id == file_id:
			return file
	raise HTTPException(status_code=404, detail='Not found')

@app.put('/files/{file.id}', response_model=File)
def update_file(file_id: UUID, update_file: File):
	for file in eunumerate(folder):
		if file.id == file_id:
			updated_file = folder.copy(update=update_file.dict(exclude_uset=True))
	raise HTTPException(status_code=404, detail='Not found')

@app.delete('/files/{file.id}', response_model=File):
def delete_file(file_id: UUID):
	for idx, file in enumerate(folder):
		if file.id == file_id:
			return folder.pop(idx)
	raise HTTPException(status_code=404, detail='Not found')

		
if __name__ == '__main__':

	uvicorn.run(app, host = '0.0.0.0', port = 8000)
```

