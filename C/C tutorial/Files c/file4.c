#include <stdio.h>
#include <stdlib.h>

int main()
{
	char filename[80],filename2[80];
	FILE *ffrom,*fto;
	 printf("Dwse to arxeio pou thes na antigrapseis:");
	 scanf("%s",filename);
	 
	 ffrom=fopen(filename,"r");
	 
	 if(!ffrom)
	 exit(1);
	 
	 printf("\nDwse to neo arxeio:");
	 scanf("%s",filename2);
	 
	 fto=fopen(filename2,"r");
	 if(fto)
	 {
	 	printf("\nTo arxeio  proorismou uparxei");
	 	exit(0);
	 }
	 fclose(fto);
	 
	 fto=fopen(filename2,"w");
	 if(!fto)
	 {
	 	printf("Error ocurred!");
	 	exit(0);
	 }
	 
	 while(!(feof(ffrom)))
	 {
	 	fputc(fgetc(ffrom),fto);	
	 }

	
	fclose(ffrom);
	fclose(fto);
	
	return 0;
}
