#include <stdio.h> 
#include "Practice.c"
#include "loop.c"
#include "pivot.c"

int main(){
    int i , j , n;
    printf ("for(int i = _): ");
    scanf ("%d" , &i);
    printf ("for(i<=_): ");
    scanf ("%d" , &j);
    printf ("for(i+=_): ");
    scanf ("%d" , &n);
        printf ("\n\n");
        loop(i,n,j);
    return 0;
}