#include <stdio.h>

//return_type function_name(){   declaration

void welcome(){
	printf("Welcome friend,drink the coolaid \n");
}

void subscribe(){
	printf("why don't you join out cult?\n");
}
int main(){
	// 1 is true, 0 is false
	int like  = 1;

	if(like){
		welcome();
	}
	else {
		subscribe();
	}

	return 0;
}
