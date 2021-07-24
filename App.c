#include <stdio.h>
#include <conio.h>
#include "box.c"
#include "Diamond.c"
#include "lib/myHeader.h"

int main(){
    int matrix = 5;
    intInput ("Enter the size of square: ", "%d", &matrix);

    box(matrix);
    
    diamond();
    
    printf ("\nPress any key to exit");
    getch();
    return 0;
}