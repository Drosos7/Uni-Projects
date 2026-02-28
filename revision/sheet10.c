#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int is_prime(int a);
int main()
{
	int a;
	printf("Dwse ena akeraio:");
	scanf("%d",&a);
	if(is_prime(a)==1)
		printf("O arithmos einai protos");
	else 
	printf("Dn einai protos");	
	
	return 0;
}
int is_prime( int a)
{
	int i;
	if(a==1)
		return 1;	
	for(i=2;i<a;i++)
	{
		if(a%i==0)
			return 0;
			}		
		return 1;	
	
	
}
