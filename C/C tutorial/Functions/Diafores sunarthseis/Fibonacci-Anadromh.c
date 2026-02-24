//Fibonacci numebrs anadromikh synarthsh//
#include <stdio.h>

int fibonacci(int n);


main()
{
	int n; 
	do{
	printf("Dwse enan fysiko megalutero tou duo airthmo:");
	scanf("%d",&n);
    }while(n<=2);
	printf("O arithmos fibonnaci tou %d,einai o %d.",n,fibonacci(n));
}

int fibonacci(int n)
{
	if(n==1||n==2)
	 return 1;
	 else
	 return fibonacci(n-1)+fibonacci(n-2);
}

