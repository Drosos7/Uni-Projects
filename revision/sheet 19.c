#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *Ffr,*fto;
	char c;
	int cnt=0;
	
	if(argc<3)
	{
		printf("Xrhsh %s",argv[0]);
		exit(1);
	}
	Ffr=fopen(argv[1],"r");
	if(!Ffr)
	{
		fprintf(stderr,"Error opening file!");
		exit(1);
	}
	fto=fopen(argv[2],"w");
	if(!fto)
	{
		fprintf(stderr,"Error opening file!");
		exit(1);
	}
	
	while((c=fgetc(Ffr))!=EOF)
	{
		if(c>='A' && c<='Z')
		{	fputc(c,fto);
			cnt++;}
			
	}
	fclose(Ffr);
	fclose(fto);
	
	printf("Ta kefalaia poy antigrafhkan einai:%d",cnt);
	
	return 0;
}
