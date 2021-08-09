#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int file(){
	char file[] =  "E:\\file.txt";
	char str[2000];
	FILE *fptr;
	fptr = fopen (file , "ab");
	
	if (fptr == NULL){
		printf ("Error");
	}
	fflush(stdin);
	scanf ("%[^\n]s" , &str);
	
	if (strcmp(str,"reset")){
		fopen ("E:\file.txt" , "w");
	}
	
	fprintf (fptr , "%s" , str);
	fclose (fptr);
	
	system ("E:\\file.txt");
	return 0;
}
