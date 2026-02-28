#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init_array(int *p , int n);
void print_reverse_array(int *p, int n);
void print_array(int *p , int n);
int main()
{
	srand(time(NULL));
	int *p, N, *start;
	printf("Dwse megethos:");
	scanf("%d",&N);
	p=(int *)calloc(N,sizeof(int));
	if(!p)
	{
		fprintf(stderr,"Error allcating memory!");
		exit(1);
	}
	init_array(p,N);
	printf("Array's initialised:\n");
	print_array(p,N);
	printf("\n\nBackwards array printed is:\n");
	print_reverse_array(p,N);
	
	free(start);
	return 0;
}
void init_array(int *p, int n)
{
	int i;
	for(i = 0 ; i < n; i++)
		p[i]=rand()%100;
}
void print_array (int *p, int n)
{
	int i;
	printf("[");
	for(i = 0 ; i < n-1 ; i++)
		printf("%d,",p[i]);
	printf("%d]",p[n-1]);	
}
void print_reverse_array(int *p, int n)
{
	int i;
	p+=(n-1);
	printf("[");
	for(i = 0 ; i< n-1 ; i++)
	{	
		printf("%d,",*p);
		p--;
	}
	printf("%d]",*p);		
}
