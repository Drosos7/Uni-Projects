#include <stdio.h>
#include <time.h>
#define N 50
void init_array(int *p,int n,int a,int b);
int  mo_array(int *p,int n);
void print_array(int*p,int n);
int max_array(int *p,int n);
int min_array(int *p,int n);

int main()
{
	srand(time(NULL));
	int A[N] ;
	float mo;
	init_array(A,N,20,80);
	print_array(A,N);
	printf("\nO mesos oros einai %d",mo_array(A,N));
	printf("\nTo max einai: %d",max_array(A,N));
	printf("\nTo min einai: %d",min_array(A,N));
	
	return 0;
}

void init_array(int *p,int n,int a,int b)
{
	int i;
	for(i=0;i<n;i++)
		p[i]=a+rand()%(b-a+1);
}

int  mo_array(int *p,int n)
{
	int i=0,sum=0,mo=0;
	for(i=0;i<n;i++)
	 sum+=p[i];
	 mo=sum/n;
	 return mo;
}

void print_array(int*p,int n)
{
	int i;
	printf("[");
	for(i=0;i<n-1;i++)
	 printf("%d,",p[i]);
	 printf("%d]",p[n-1]);
}
int max_array(int *p,int n)
{
	int i,max=p[0];
	for(i=0;i<n;i++){
	 if(max<p[i])
	 	max=p[i];}
	 return max;	
}


int min_array(int *p,int n)
{

	int i,min=p[0];
	for(i=0;i<n;i++)
	 {if(min>p[i])
	 	min=p[i];
	 }
	 return min;	

	
}

