//Ypologismos thetikou akeraiou
#include <stdio.h>

long int factorial(long int n);

int main()
{
	long int num;
	do{
	printf("Dwse enan thetiko akeraio:");
	scanf("%ld",&num);
    }while(num<0);
    if(num>16){
    printf("Overflow");
    return 1;}
    
	printf("To paragontiko tou %ld, einai to %ld",num,factorial(num)); 
	return 0;
}

long int factorial (long int n)
{
	if(n==1||n==0)
	 return 1;
	else return n*factorial(n-1); 
}
