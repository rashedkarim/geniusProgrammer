#include <stdio.h>

int loop(int i,int j,int n){
    for (;i<=n;i+=j){
        printf ("%4d" , i);
    }
    return 0;
}