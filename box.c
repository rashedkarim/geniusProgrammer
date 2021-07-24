#include <stdio.h>

void box(int matrix){
    for(int row = 1; row < matrix; row++){
        for(int col = 1; col < matrix; col++){
            printf (" * ");
        }
        printf ("\n");
    }
}