#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define N 20

void init_array(float *p,int n);
double std_dev (float *p,int n,double mo);
double  mo_array(float *p,int n);

int main()
{
	srand(time(NULL));
	float p[N];
	init_array(p,N);
	printf("H tupikh apoklish tvn timvn tou pinaka einai:%lf",std_dev(p,N,mo_array(p,N)));
	
	
	return 0;
}
void init_array(float *p,int n)
{
	int i;
	for(i=0;i<n;i++)
		p[i]=(float)rand()/RAND_MAX;
}
double  mo_array(float *p,int n)
{
	int i=0,sum=0;
	for(i=0;i<n;i++)
	 sum+=p[i];
	 return sum/n;
}

double std_dev(float *p,int n,double mo)
{
	double s2=0;
	int i=0;
	for(i=0;i<n;i++)	
     s2+=sqrt(pow(mo-p[i],2));
	 return s2/n;	
}
