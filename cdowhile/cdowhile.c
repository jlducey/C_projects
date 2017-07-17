#include <stdio.h>

int main(){
	int scores[5] = { 12, 10, 8, 5 };
	int sizeofarray = 5;
    int i = 0; // initialize before the do or doesn't work in the do

	do{
		printf("i is: %d , and scores is: %d\n", i, scores[i]);
		i++; // increment i;
	}
	while (i < sizeofarray); // condition checked after the first execution of code block in do
}
