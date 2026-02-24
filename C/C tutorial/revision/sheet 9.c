#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void bubble_short(int *p, int n);
void init_array(int *p, int n);
void swap ( int *a , int *b);
void print_array( int *p , int n);
int main()
{
	srand(time(NULL));
	int *p,N;
	printf("Type the size of the array:");
	scanf("%d",&N);
	p=(int *)malloc(N*sizeof(int));
	if(!p)
	{
		fprintf(stderr,"Error occured allocating memory!");
		exit(1);
	}
	init_array(p,N);
	printf("\nInitialised array :\n");
	print_array(p,N);
	printf("\n \t Sorted array:\n");
	bubble_short(p,N);
	print_array(p,N);
	free(p);
	
	return 0;
}

void swap ( int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void bubble_short(int *p, int n)
{
	int i,j,swapped;
	for(i=0;i<n-1;i++)
	{
		//Flag for quicker bubble sort			
		swapped=0;
		
	 	for(j=1; j<n-i ; j++)
		 {
	 		if(p[j]<p[j-1]){
	 			swap(&p[j],&p[j-1]);
				 swapped=1;
				 }
		}
		if(!swapped)
			break;
	}
	 			
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
