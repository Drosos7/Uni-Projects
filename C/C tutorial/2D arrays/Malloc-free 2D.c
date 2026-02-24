//Dynamikh desmesyh mnhmhs se 2D array//
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int **p;
	int i,j=0,M,N;
	
	//Diabasma megethos pinaka apo xrhsth//
	printf("Dwse tis grammes:");
	scanf("%d",&M);
	printf("\nDwse tis sthles:");
	scanf("%d",&N);

	
	//Malloc//
	p=malloc(M*sizeof(int*));
	if(!p)
	{
		printf("Adunamia desmeushs mnhmhs");
		exit(0);
	}
	 for(i=0;i<M;i++)
	{
	 
	  *(p+i)=malloc(sizeof(int)*N);
	  if(!p)
	  {
	  	printf("Adunamia desmeushs mnhmhs");
	  	exit(0);
	  }	
	  //Kapoios upologismos...//
	  for(i=0;i<M;i++)
	  {
	  	p[i][j]=0;
	    printf("\t[%d,",p[i][j]);
	    for(j=0;j<N-2;j++)
		{
	    	p[i][j]=0;	
	       printf("%d,",p[i][j]);
		 }
		 p[i][j+1]=0;
	    printf("%d]\t",p[i][N-1]);
	    printf("\n");
		}
	    
	    //Apodesmeysh mnhmhs//
	    for(i=0;i<M;i++)
	     free(p[i]);
	     free(p);
   }
   return 0;
}
