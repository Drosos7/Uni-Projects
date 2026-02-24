//Tajinomihsh me selection vs Bubble short
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10000
void selection_short(int *p,int n);
void Bubble_short(int *p,int n);
void init_array(int *p,int n);
void print_array(int*p,int n);
void swap(int *a,int *b);

int main()
{
	srand(time(NULL));
	double t1,t2;
	int p1[N],p2[N],i;
	clock_t start,end;
	
	printf("\t\tO arxikopoihmenos pinakas:\n\n");
	init_array(p1,N);
	print_array(p1,N);
	//ANTIGRAFH TOU PINAKA
	for(i=0;i<N;i++)
		p2[i]=p1[i];
	
	start = clock();
	selection_short(p1,N);
	end = clock();
	t1 = (double)(end-start) / CLOCKS_PER_SEC;
	printf("\n\n\t\tTaxinomehmenos me selection:\n\n");
	print_array(p1,N);
	
	start = clock();
	Bubble_short(p2,N);
	end = clock();
	t2 = (double)(end-start)/ CLOCKS_PER_SEC;
	printf("\n\n\t\tTaxinomhmenos me Bubble short:\n\n");
	print_array(p2,N);
	
	printf("\n\nH selection ekane %lf seconds",t1);
	printf("\n\nH Bubble ekane %lf seconds",t2);
	if(t1>t2)
	 printf("\n\nKerdise h Bubble");
	else if(t1<t2)
	printf("\n\nKerdise h selection");
	else printf("\n\nIsous xronous"); 

	return 0;
}
void init_array(int *p,int n)
{
	
	int i;
	for(i=0;i<n;i++)
		p[i]=1+rand()%100;
}

void selection_short(int *p,int n)
{
	int i,j,pos;
	for(i = 0 ; i < n-1 ; i++)
	{
	   pos=i;
	   for(j=i+1 ; j<n ; j++)
	 {
	 	 if(p[j]<p[pos])
	 	 pos=j;
	 }
	 swap(&p[i],&p[pos]);}
	
}

void Bubble_short(int *p,int n)
{
	int i,j;
	 for(i=0;i<n;i++){
	  for(j=0;j<n-i-1;j++)
	    if(p[j]>p[j+1])
	     swap(&p[j],&p[j+1]);
	 }
}
void print_array(int*p,int n)
{
	int i;
	printf("[");
	for(i=0;i<n-1;i++)
	 printf("%d,",p[i]);
	 printf("%d]",p[n-1]);
}

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

