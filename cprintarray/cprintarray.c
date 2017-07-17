#include <stdio.h>

//returntype name(arguments)
void printArray(int array[],int length) // passed int array as 1st arg, int as second
{
	for(int i=0;i<length;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");
}

int main()
{
	int scoresTeam1[] = {10,101,25,47}; // a valid int array
	int scoresLength = 4;      // a valid int
	int scoresTeam2[] = {10,100,5,7};  // another valid int array

	printArray(scoresTeam1,scoresLength);
	printArray(scoresTeam2,scoresLength);
	//printArray(scoresLength,scoresTeam1); // not valid .. not matching param types order.. exe doesn't work, but compiles
	return 0;
}
