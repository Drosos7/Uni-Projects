#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int check_Armstrong(int n);

int main()
{
	int x;
	printf("Dwse ena akeraio:");
	scanf("%d",&x);
	if(check_Armstrong(x)==1)
	printf("O arithmos %d einai Armstrong.",x);
	else 
	printf("Den einai Armstrong");
	return 0;
}
int check_Armstrong(int n)
{
	int sum=0,sign=1,temp,digit;
	if(n<0)
	sign=-1;
	temp=abs(n);
    while(temp>0)
    {
    	digit=temp%10;
    	sum+=pow(digit,3);
    	temp/=10;
	}
	
	if(sign*sum==n)
	return 1;
	
	return 0;
}
