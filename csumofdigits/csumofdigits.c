#include <stdio.h>

//345
//34 - 5
//3  - 5 + 4
//0  - 5 + 4 + 3

int sumOfDigits(int n) //345
{
	int temp = n;//3
	int sum = 0;//0 + 5 + 4 + 3
	while(temp!=0)
	{
		sum = sum + temp % 10;
		temp = temp/10;
	}
	return sum;

}

//456 - 15
//24567 - 24

int main()
{
	printf("456: %d\n",sumOfDigits(456));
	printf("24567: %d\n",sumOfDigits(24567));
	return 0;
}
