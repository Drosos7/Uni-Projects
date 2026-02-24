#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);
int main()
{
	int n;
	printf("Dwse enan fusiko arithmo:");
	scanf("%d",&n);
	printf(" O %d-ostos arithmos Fibonacci einai:%d",n,fibonacci(n));
	
	return 0;
}
int fibonacci(int n)
{
	if(n==0 || n==1)
		return 1;
	else return n*fibonacci(n-1);	
}
