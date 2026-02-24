#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	
	fp=fopen("text.txt","w");
	if(!fp)
	{
		printf("Error occured while opening");
		exit(1);
	}
	fprintf(fp,"0123456789");
	fclose(fp);
	fp=fopen("text.txt","a+");
	printf("%ld",ftell(fp));
	fprintf(fp,"1234");
	rewind(fp);
	while(!feof(fp))
		printf("%c",fgetc(fp)); 
	fclose(fp);
	
}
