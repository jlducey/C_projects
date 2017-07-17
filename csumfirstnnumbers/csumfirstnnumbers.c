#include <stdio.h>

int sumN(int n){
	int result = 0;

	for(int i=1; i < n; i++) {
		result = result + i;
	}
	return result;
}

int main(){
	printf("sum up to 5: %d\n",sumN(5));
	printf("sum up to 10: %d\n",sumN(10));
	return 0;
}
