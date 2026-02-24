//mystrcpy synarthsh antigrafei thn symboloseira src sthn dest//

#include <stdio.h>
#define N 60

char *mystrcpy(char *dest,char *src);

int main()
{ 
  int ap;
  char str1[N],str2[N],str3[N];
  printf("Dose dyo symboloseires:\n");
  gets(str1);
  gets(str2);

    printf("Poia thelete?");
    scanf("%d",&ap);
    
    if(ap==1)
     mystrcpy(str3,str1);
	else if(ap==2)
	 mystrcpy(str3,str2);
    else{
    	do{
	  printf("Lathos epilogh (1 H'2)\n");
	  scanf("%d",&ap);
     }while(ap<1||ap>2);
    }
   printf("\n");
   puts(str1);
   puts(str2);
   puts(str3);
      
	return 0;
}

char *mystrcpy(char *dest, char *src)
{
	int i=0;
	
    while(src[i]!='\0')
    {
    	dest[i]=src[i];
    	i++;
	}
	  dest[i]='\0';
	  
	  return dest;
	
}
