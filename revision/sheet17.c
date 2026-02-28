#include <stdio.h>
#include <stdlib.h>

void backwards_upper(char *s);


int main()
{
	char s[100];
	
	printf("Dwse string:");
	fgets(s,100,stdin);	
	printf("Egrapses to:%s",s);
	
	backwards_upper(s);
	printf("\nString uppered and backwards is:%s",s);
	
	
	return 0;
}
void backwards_upper(char *s)
{
	int l=0, i;
	char temp;
	while(s[l]!='\0')
	{
		if(s[l]=='\n'){
			s[l]='\0';
			break;
		}
		l++;
	}
	
	for(i = 0 ; i<l ; i++ )
	{
		if((s[i]>='a' && s[i]<='z'))
			s[i]-=32;
			
	}
	
	for(i =0 ; i< l/2 ; i++)
	{
		temp=s[i];
		s[i]=s[l-1-i];
		s[l-1-i]=temp;
	}

}


			s[i]='\0';
			break;
			}
			l++;
	}
	
	for(i = 0 ; i<l ; i++ )
	{
		if((s[i]>='a' && s[i]<='z'))
			s[i]-=32;
			
	}
	
	for(i =0 ; i< l/2 ; i++)
	{
		temp=s[i];
		s[i]=s[l-1-i];
		s[l-1-i]=temp;
	}

}

