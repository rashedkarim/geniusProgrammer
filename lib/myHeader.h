#include<stdio.h>
// my header
void intInput(char prompt[], char format[], int * variable){
	printf("%s", prompt);
	scanf(format, variable);
}

int add(int a, int b){
    return a + b;
}