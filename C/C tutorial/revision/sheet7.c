#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 10

void init_array(int *p, int n);
void print_array(int *p, int n);
float mo_array(int *p, int n);

int main()
{
	
	int p[N];
	init_array(p,N);
	print_array(p,N);
	printf("\n\nAverage is:%.3f",mo_array(p,N));
return 0;
}
void init_array(int *p, int n)
{
	int i;
	for(i=0;i<n;i++)
		p[i]=rand()%100;
}

void print_array(int *p, int n)
{
	int i;
	printf("[");
	for(i=0;i<n-1;i++)
		printf("%d,",p[i]);
	printf("%d]",p[n-1]);	
}

float mo_array(int *p, int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
		sum+=p[i];
	return sum/n;	
}
