#include <stdio.h>

int main(){
    int matrix;
    printf ("Enter the size of square: ");
    scanf ("%d" , &matrix);

    for(int row = 1; row < matrix; row++){
        for(int col = 1; col < matrix; col++){
            printf (" * ");
        }
        printf ("\n");
    }
    return 0;
}