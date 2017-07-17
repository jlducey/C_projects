#include <stdio.h>

void printDivisors(int n)
{
	for(int i=2; i < n; i++){
		// we are checking if number divides without a remainder
		if(n%i ==0){
			printf("%d\n",i);
		}
	}
}

//12 - 2,3,4,6
int main()
{
	printDivisors(48);
	return 0;
}
