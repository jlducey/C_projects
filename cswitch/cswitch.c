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
	int like  = 5;

	switch(like)
	{
	case 1:
		printf("like was 1\n");
		break;
	case 2:
		printf("like was 2\n");
		break;
	case 3:
		printf("yep case was a 3\n");
	    break;
	default:
		printf("no idea what it was, oh well\n");
		break;
	case 4:
		printf("guess the terrorists win\n");
		break;
	}

	return 0;
}
