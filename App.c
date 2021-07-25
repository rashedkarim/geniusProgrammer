#include <stdio.h>
#include "loop.c"
#include "delay.h"
#include <string.h>

int main(){
    typedef struct{
        char foodType[20];
        char food[20];
        char ing[1000];
    }ranna;
    ranna ran;

    printf ("Enter the food type: ");
    scanf ("%s" , &ran.foodType);

    printf ("Enter the food name: ");
    scanf ("%s" , &ran.food);

    printf ("\n-----------------------------------------------\n");
    do{
        printf ("Enter the ingredient: ");
        scanf ("%s" , &ran.ing);
    }while (strcmp(ran.ing,"done"));

    //if else part: 
    switch(ran.foodType){
        //case strcmp(ran.foodType,"Breakfast"):
        case strcmp(ran.foodType,"Fast food"):
            if (strcmp(ran.ing,"meat")){
                printf ("Good");
            }
            break;
       // case strcmp(ran.foodType,"Meat and fish"):
    }
    return 0;
}
//printf ("\nNext step: ");