#include <stdio.h>
#include <stdbool.h>

int main(){

int i = 0; int y = 0;

FILE *myFile;
myFile = fopen("input.txt", "r");

int numbers[2000];

for(i=0; i<2000; i++){
fscanf(myFile, "%d", &numbers[i]);
}

i=0;


for(i=0; i<1997; i++){
	if(
		numbers[i]+numbers[i+1]+numbers[i+2]<numbers[i+1]+numbers[i+2]+numbers[i+3]
	){
		y = y+1;
	}
}

printf("Answer: %d", y);

	return 0;
}
