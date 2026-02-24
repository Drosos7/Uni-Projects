#include <stdio.h>
#include <stdlib.h>
#define N 1000
int  mystrcmp(char *str1,char* str2,int n);
int mystrlen (char *str);
int  check_str(char *str);
int main()
{
	char str1[N],str2[N];
	int m;
	do{
	printf("Dwse mia lexh sta peza:");
	gets(str1);
   }while(check_str(str1)==0);
	
	do{
	printf("Dwse deuterh lexh sta peza:");
	gets(str2);
	}while(check_str(str2)==0);
	 if(mystrlen(str1)<	mystrlen(str2))
	 printf("%s<%s",str1,str2);
    else if (mystrlen(str1)>mystrlen(str2)) 
	printf("%s<%s",str2,str1);
	else{		
		 m=mystrcmp(str1,str2,mystrlen(str1));
		if(m==1)
		 printf("%s<%s",str1,str2);
		else if(m==2)
		 printf("%s<%s",str2,str1);
		else printf("%s=%s",str1,str2); 
	 } 	
	return 0;
}



int mystrlen(char *str)
{
    int i=0;
	while(str[i]!='\0')
	 i++;
	 
	return i;
	
}

int mystrcmp (char *str1,char*str2,int n)
{
	int k=0;
	while(k<n)
	{
	 if(str1[k]<str2[k])
	  return 1;
	 else if(str1[k]>str2[k])
	  return 2;
	 else  
	 k++;
     }
     return 0;
}
	 
int check_str (char *str)
{
	int i=0;
   while (str[i]!='\0')
    {
    	if(!(str[i]>='a'&&str[i]<='z'))
    	 return 0;
		i++; 
	}
	return 1;
}
