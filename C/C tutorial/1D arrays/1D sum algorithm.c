//product of 1D static array
#include <stdio.h>
#define N 5
main()
{
   int A[N],i,prod;
   	prod=1;	
	for (i=0;i<N;i++)
	{
	  	printf("Give an integer between 1-8 for %d     content of the array :",i+1);
	 	scanf("%d",&A[i]);
		 if(A[i]<1||A[i]>8){
      do{   
		        printf("Invalid value,try again.");
       	 	scanf("%d",&A[i]);
             
		     }while(A[i]<1||A[i]>8);     
	    }

		   prod*=A[i];
     }
     printf("Array's product is:%d",prod);
}
