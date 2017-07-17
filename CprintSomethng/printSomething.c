#include <stdio.h>

void printSomething(){
	printf("I may be executed\n");
}

int main() {
	printf("here we go\n");
	printSomething();
	return 0;
}
