#include<stdio.h>

void continueExample(int n){
    int i = 1;
    while(i <= n){
        
        if(i == 5){
            i++;
            continue;
        }
        printf("%d ",i++);
    }
}