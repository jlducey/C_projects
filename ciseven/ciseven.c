#include <stdio.h>

int isEven(int num){
	if(num%2==0){
		return 1; // if even
	}
	return 0; // if not even
}

int main(){
	printf("1: %d\n",isEven(1));
	printf("2: %d\n",isEven(2));
	return 0;
}
