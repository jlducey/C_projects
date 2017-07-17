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
	// positive is true, negative or zero false... so check vals explicitly

	int like  = 28;
    printf("like is set to: %d\n", like);

	if(like == 1){
		welcome();
	}
	else if(like == 2) {
		subscribe();
	}
	else {
		printf("didn't know you were a cop, nevermind\n");
	}

	return 0;
}
