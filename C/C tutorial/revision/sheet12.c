//Max MIN apo sunarhsh

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_array(int *p , int n);
void init_array(int *p, int n);
void max_min_array(int *p, int n, int *min, int * max);
int main()
{
	srand(time(NULL));
	int *p,N, min , max;
	
	printf("Dwse diastash :");
	scanf("%d",&N);
	p=(int *)malloc(N*sizeof(int));
	if(!p)
	{
		fprintf(stderr," Error allocating memory!");
		exit(1);
	}
	init_array(p,N);
	printf("O pinakas arxikopoietike:\n");
	print_array(p,N);
	max_min_array(p,N,&min,&max);
	printf("\nTo megisto stoixeio tou einai:%d",max);
	printf("\nTo elaxisto einai :%d",min);
	
	free(p);
	return 0;
}
void print_array (int *p, int n)
{
	int i;
	printf("[");
	for(i = 0 ; i < n-1 ; i++)
		printf("%d,",p[i]);
	printf("%d]",p[n-1]);	
}
void max_min_array(int *p, int n, int *min, int * max)
{
	int i;
	*max=p[0],*min=p[0];
	for(i = 1 ;i < n ; i++)
	{
		if(p[i]<*min)
		*min=p[i];
		
		if(p[i]>*max)
			*max=p[i];
				
		 }	 
}
void init_array(int *p, int n)
{
	int i;
	for(i = 0 ; i < n; i++)
		p[i]=rand()%100;
}

