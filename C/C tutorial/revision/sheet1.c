#include <stdio.h>

int main(void)
{
	int a,b,prod=1,def=0,sum=0;
	printf("Type first integer:");
	scanf("%d",&a);
	
	printf("Type second integer:");
	scanf("%d",&b);
	
	sum=a+b;
	def=a-b;
	prod=a*b;
	
	printf("Summary is:%d\n",sum);
	printf("Difference is:%d\n",def);
	printf("Product is:%d",prod);

	return 0;
}
