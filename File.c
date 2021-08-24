#include <stdio.h>
#include <stdlib.h>

int file(){
	char file[2000];
	char show [2000];
	FILE *fptr;
   
	fptr = fopen("E:\\file.txt","ab");

	printf("file.txt: \n\n");
	scanf("%s",&file); 
   
	fprintf(fptr,"%s",file);
	fclose(fptr);
   
	fscanf(fptr,"%d", &show);
	printf("%s", show);
	fclose(fptr); 

   system ("E:\\file.txt");
   return 0;
}
