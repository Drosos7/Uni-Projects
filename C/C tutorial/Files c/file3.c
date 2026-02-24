#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	fp=fopen("text.txt","w");
	if(!fp) exit(1);
	fclose(fp);
	
	fp=fopen("text.txt","w+");
	if(!fp)	exit(0);
	printf("Pos=%ld\n",ftell(fp));
	
	fprintf(fp,"0123");
	rewind(fp);
	while(!(feof(fp)))
		printf("%c",getc(fp));
	fclose(fp);
	
	
	
	
	return 0;
}
