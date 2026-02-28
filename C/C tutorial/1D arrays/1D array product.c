#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 1000

void innit_array(int *pinakas,int n,int a, int b);
void print_array(int *pinakas,int n);
int product_array(int *pinakas,int n);



int main(void)
{ 
    int A[SIZE];
    int i,N=20;

    /*Arxikopoihsh pinaka me tuxaies times 20 theseon me times 1-30*/
       innit_array(A,N,1,30);
       
       //Ektyposh pinaka//
       printf("Pinakas dedomenwn:\n");
       print_array(A,N);
       printf("\n\n");
       
       //ypologismos ginomenou//
       
       printf("\n\n The product is  %d", product_array(A,N));

	return 0;
}


void innit_array(int *A,int n, int a,int b)
{
	srand(time(NULL));
	int i;
	for(i=0;i<n;i++)
	  A[i]=a+rand()%(b-a+1);
}

void print_array(int *A,int n)
{
	int i;
	printf("[");
	for(i=0;i<n-1;i++)
	 printf("%d,",A[i]);
	 printf("%d]",A[n-1]);
	
}

int product_array (int *A,int n)
 {
 	int pr=1,i;
 	
 	for(i=0;i<n;i++)
 	 pr*=A[i];
 	 
	return pr;
 	 
 }
 	
 	
