#include <stdio.h>
#include <stdlib.h>

char * read_string();
long int myatoi(char *s);
int checkfor_digits(char *s);
int main()
{  
	int cnt=0;
    char *s;
    
	do{
		if(cnt>0)
		printf("H sumboloseira den apoteleitai mono apo pshfia!!!!\n\n");
		
		printf("Dwse akeraio:");
		s=read_string();

		if(!s){
			printf("Apotuxia demseushs mnhmhs");
			free(s);
			exit(1);
			}
			
			cnt++;		
		}while(checkfor_digits(s)!=1);
		
	 printf("Integer digits' number is:%ld",myatoi(s));
	 free(s);
	 
	 return 0;
}

char * read_string()
{
	char *str=NULL;
	char*temp;
	char c;
	int l=0;
	while((c=getchar())!='\n' &&  c!=EOF)
	{
		temp= realloc(str,l+2);//+1 gia ton xarakthra pou diabasthke +1 gia \0
		if(temp==NULL){
		 return NULL;
		}
		str=temp;
		str[l]=c;
		l++;
		str[l]='\0';}
	
	return str;
}

int checkfor_digits(char *s)
{
	char *p=s;

    if(*p=='-')
		 p++;
	if(*p=='\0')
		return 0;
	while(*p!='\0')
	{
		if(!(*p>='0'&&*p<='9'))
		return 0;
		p++;
		}
	
		return 1;  
}

long int myatoi(char *s)
{
	char *p=s;
	long int res=0;
	int sign=1;
	
	if(*p=='-' )
	{sign=-1;
	 p++;}
	 while(*p!='\0')
	 {
	 	res=res*10+(*p-'0');
	 	p++;
	 }
	 return sign*res;
}
