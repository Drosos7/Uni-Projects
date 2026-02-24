#include <stdio.h>

int main()
{
	int a,sum_digits=0;
	do{
	printf("Dwse enan tetrapshfio:");
	scanf("%d",&a);
	}while(a/1000==0);
	sum_digits=a/1000+(a%1000)/100+(a%100)/10+a%10;
	printf("%d",sum_digits);
	
return 0;
}
	
