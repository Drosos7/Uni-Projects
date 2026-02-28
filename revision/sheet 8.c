#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

void init_array(int p[][N], int n);
void print_2darray(int (*p)[N], int n);
int sum_diagonios(int p[][N] , int n);

int main()
{
	srand(time(0));
	
	int p[N][N];
	
	printf("Array 's initialiased");
	init_array(p,N);
	printf("\nPinakas\n");
	print_2darray(p,N);
	printf("\n Sum of main diagonal is:%d",sum_diagonios(p,N));
	
	
	return 0;
}
void init_array(int p[][N], int n)
{
	int i,j;
	for(i = 0 ; i<n ; i++)
		for(j = 0 ; j < n ; j++)
			p[i][j]=rand()%100;
		}

int sum_diagonios(int p[][N], int n)
{
	int i,j,sum=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			if(i==j)
			sum+=p[i][i];
		}
		return sum;	
}
void print_2darray(int (*p)[N], int n)
{
	int i,j;
	for(i=0;i<n;i++){
		printf("[%d,",p[i][0]);
		for(j=1;j<n-1;j++)
			printf("%d,",p[i][j]);
		printf("%d]\n",p[i][n-1]);	
			
	}
}

