//Sunarthsh pou metatrepei ta mikara se kefalaia//
#include <stdio.h>
#define N 1000
void mycapitals(char *string);

int main()
{
	char str[N];
    printf("Dwse symboloseira:");
	gets(str);
	printf("\nArxika:");
	puts(str);
	printf("\nTelika:");
	mycapitals(str);
	puts(str);
	return 0;	
}


void mycapitals(char *string)
{
	int i=0;
	while(string[i]!='\0')
	{
		if(string[i]>='a'&&string[i]<='z')
		string[i]-=32;
		i++;
	 } 
}


