//Mystrlen synarthsh pou dexetai mia statherh  sumboloseira kai epistrfei to mhkos ths//
#include <stdio.h>
#define N 1000

int mystrlen(char *str);

int main()
{
	char str[N];
	printf("Dwse mia symbolseira :");
	gets(str);
	printf("Plrhktrologistae thn sumboloseira:");
	puts(str);
	printf("Kai to mhkos ths einai:%d",mystrlen(str));
	
	return 0;
}

int mystrlen(char*str)
{
     int i=0;
	 
	 while(str[i]!='\0')
	     i++;
	     
	  	return i;
}
