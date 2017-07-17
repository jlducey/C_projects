#include <stdio.h>

int numberOfDigits(int n) //345
{
	int temp = n;//0
	int count = 0;//3
	while(temp!=0)
	{
		count++;
		temp = temp/10; // truncates while diving by ten, when it can't do anymore drop out count is adjusted
	}
	return count;

}

//456 - 3
//24567 - 5

int main()
{
	printf("456: %d\n",numberOfDigits(456));
	printf("24567: %d\n",numberOfDigits(24567));
	return 0;
}
