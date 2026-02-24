//Ypologismos mathimatikhs parastashs//

#include <stdio.h>
#include <math.h>//An htan Linux gcc programm.c-ls
double f(double n);
long long int factorial(long int n);

int main()
{
	double x,left,right;
	
	printf("Dwse enan arithmo:");
	scanf("%lf",&x);
	
	left=exp(x);
	right=f(x);
	
	if(fabs(left-right<=0.00001))
	printf("Einai %.2lf einai iso me to %.2lf",left,right);
	else printf("Den einai isa");
	
	return 0;
}

double f(double n)
{
	long long int i;
	float sum=0;
	n=abs(n);
	for(i=0;i<16;i++)
	{
		sum+=(pow(n,i)/factorial(i));
	}
	
return sum;
}

long long int factorial (long int n)
{
	n=abs(n);
	if(n==1||n==0)
	 return 1;
	else return n*factorial(n-1); 
}
