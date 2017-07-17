#include <stdio.h>

//0-false 1-true
int calculateSumEvenNumbersUpto(int n)
{
	int result = 0;

	for(int i=2; i<=n*2; i = i + 2) //1 to n 2,4,6,8,10
	{
		result = result + i; //1 to n  2 * 1 to 2 * n
	}

	return result;
	// 1 to n
	// result = result + index
}

// 5 =  1 to 5, 1 + 2 + ... + 5 = 15

int main()
{
	printf("upto 5: %d\n",calculateSumEvenNumbersUpto(5));
	printf("upto 10: %d\n",calculateSumEvenNumbersUpto(10));

	return 0;
}
