#include <stdio.h>

int isLeap(int num){
	if(num%400==0){
		return 1;
	}
	if(num%100==0){
	    return 0;
	}
	if(num%4==0){
		return 1;
	}
	return 0;
}

int main(){
	printf("2000: %d\n",isLeap(2000));
	printf("1900: %d\n",isLeap(1900));
	printf("1904: %d\n",isLeap(1904));
	printf("1901: %d\n",isLeap(1901));
	printf("2017: %d\n",isLeap(2017));
	return 0;
}
