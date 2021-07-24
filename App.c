#include <stdio.h> 
#include "Practice.c"
#include "loop.c"
//#include "pivot.c"

int main(){
    int a;
    printf ("Enter the size to for loop: ");
    scanf ("%d" , &a);
    loop(a);
    return 0;
}