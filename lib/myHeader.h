#include<stdio.h>
// my header
typedef char *string;

void intInput(char prompt[], char format[], int * variable){
	printf("%s", prompt);
	scanf(format, variable);
}

int add(int a, int b){
    return a + b;
}
