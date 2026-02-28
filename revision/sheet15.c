#include <stdio.h>
#include <stdlib.h>

int mystrcmp(char  *s1, char *s2 );

int main()
{
	int res;
	char s1[100],s2[100];
	printf("Dwse proth sumbloseira:");
	gets(s1);
	printf("Dwse deuterh sumboliseira:");
	gets(s2);
	res=mystrcmp(s1,s2);
	if(res==0)
		printf("%s=%s",s1,s2);
	else if(res==1)
		printf("%s>%s",s1,s2);
	else printf("%s<%s",s1,s2);
	
	return 0;
}
int mystrcmp(char *s1, char *s2)
{
	int i=0;
	int j=0;
	while(s1[i]!='\0' && s2[i]!='\0')
	{	
		i++;
	}
		if(s1[i]=='\0'&& s2[i]=='\0')
		{
			while(s1[j]!='\0' && s2[j]!='\0')
			{
				if(s1[j]<s2[j])
					return -1;
				else if ( s1[j]>s2[j])
				return 1;	
				j++;
				}
			return 0;
			}
		else if(s1[i]=='\0')
			return 	-1;
		else return 1;			
}
