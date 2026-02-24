#include <stdio.h>
#include <stdlib.h>
int sum_digits(int n);
int main()
{
	int x,sign=1;
	
	printf("Dwse akeraio:");
	scanf("%d",&x);
	if(x<0)
	 sign=-1;
	 
	x=abs(x);
   
   printf("\nTo athorisma twn pshfion tou %d ,einai: %d",sign*x,sign*sum_digits(x)); 
   return 0;
}
int sum_digits(int n)
{
	int sum=0;
	while(n>0){
	sum+=n%10;
	n/=10;
    }
    return sum;
}
