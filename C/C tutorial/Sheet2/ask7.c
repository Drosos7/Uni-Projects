#include <stdio.h>
#include <time.h>

#define N 6

void init_array(int *p,int n);
void print_array(int *p,int n);

int main()
{
	srand(time(NULL));
	int A[N];
	init_array(A,N);
	print_array(A,N);
	
	return 0;
}

void init_array(int *p,int n)
{
	int i=0;
	p[i]=1+rand()%49;
	for(i=1;i<n;i++){
	   p[i]=1+rand()%49;
	  while(p[i]==p[i-1])
	   p[i]=1+rand()%49;
	}
}

void print_array(int *p,int n)
{
	int i;
	printf("[");
	for(i=0;i<n-1;i++)
		printf("%d,",p[i]);
	 printf("%d]",p[n-1]);	
	
}
