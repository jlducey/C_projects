#include <stdio.h>

int main(){
	int scores[5] = { 12, 10, 8, 5 };
	int sizeofarray = 5;

	int i = 0;
	while(i < sizeofarray){
		printf("array element scores[%d] is %d\n", i, scores[i]);
		i++; // increment i
	}



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
