#include <stdio.h>
#include <stdbool.h>

int main(){

int i;
int count = 0; int cmpr = 0;

FILE *myFile;
myFile = fopen("input.txt", "r");

int numbers[2000];

	cmpr = numbers[0];

for(i=0; i<2000; i++){

fscanf(myFile, "%d", &numbers[i]);

	if (cmpr < numbers[i]) {
		count = count + 1;
	}
	cmpr = numbers[i];
}

printf("The number of values that are bigger than the previous is:  %d", count);

	return 0;
}
