#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	fp=fopen("text2.txt","w");
	if(!fp)
	exit(0);
	fprintf(fp,"1234356346456");
	fclose(fp);
	
	fp=fopen("text.txt","r+");
	if(!fp)
	exit(0);
	
	printf("O dromeas brisketai sthn thesh %ld \n",ftell(fp));
	
	while(!(feof(fp)))
		
		printf("%c",getc(fp));
	rewind(fp);
	fprintf(fp,"ABCD");
	rewind(fp);
	while(!(feof(fp)))
	 printf("%c",getc(fp));
	 fclose(fp);
	return 0;
}
