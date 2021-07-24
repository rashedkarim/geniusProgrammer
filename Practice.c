#include <stdio.h>

int practice(){
    int sum = 0;
    int a[3][3] = {
                    {1,2,3},
                    {4,5,6},
                    {7,8,9}
                            };
    for (int row = 0; row < 3; row++){
        for (int col = 0; col < 3; col++){
            printf ("%3d" , a[row][col]);
        }
        printf (" = %d" , a[row][0] + a[row][1] + a[row][2]);
        printf ("\n");
    }

    for (int row = 0; row < 3; row++){
        printf ("%3d" , a[0][row] + a[1][row] + a[2][row]);
        sum = sum + a[0][row] + a[1][row] + a[2][row];
    }
        printf (" = %d" , sum);
    return 0;
}