#include<stdio.h>


int linearSearch(int *array, int arrLen, int searchNo){
    int index = -1, cnt =0;
    for(int i=0; i<arrLen; i++){
        cnt++;
        if(array[i] == searchNo){
            index = i;
            break;
        }
    }

    printf("\nCost of execution : %d",cnt);

    return index;
}