#include <stdio.h>

void diamond(){
    int a[5][5] = {
                    {32,32,42,32,32},
                    {32,42,42,42,32},
                    {42,42,42,42,42},
                    {32,42,42,42,32},
                    {32,32,42,32,32}
    };
    for (int row = 0; row < 5; row++){
        printf ("\n");
        for (int col = 0; col < 5; col++){
            printf ("%c" , a[row][col]);
        }
        
    }
}