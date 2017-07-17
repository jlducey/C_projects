#include <stdio.h>

int main(){
	int scores[5] = { 12, 10, 8, 5 };
	int sizeofarray = 5;

	for
	(
		int i = 0; // initialization
			i < sizeofarray; // condition
			i++ // increment array counter
			)
	{
		printf("i is: %d , and scores is: %d\n", i, scores[i]);
	}
}
