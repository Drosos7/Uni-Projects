//Dynamikh desmesyh mnhmhs se 2D array//
#include <stdio.h>
#include <stdlib.h>

int main()
{
	double **p;//Δεικτης σε δεικτη double
	int i,j,M,N,sum_bytes=0;
	
	//Diabasma megethos pinaka apo xrhsth//
	printf("Dwse tis grammes:");
	scanf("%d",&M);
	printf("\nDwse tis sthles:");
	scanf("%d",&N);

	
	//Malloc επιστρεφει την διευθυνση του πρωτου στοιχειου της στηλης//
	p=malloc(sizeof(double*)*M);//Δεσμευση χωρου ενος πινακα Μ θεσεων δεικτων
	if(!p)
	{
		printf("Adunamia desmeushs mnhmhs");
		exit(0);
	}
	 for(i=0;i<M;i++)
	{
	 
	  *(p+i)=malloc(sizeof(double)*N);//Δεσμευση Μ πινακων με για Ν doubles με διευιθυνση το p[i] δεικτη    
	  if(!p)
	  {
	  	printf("Adunamia desmeushs mnhmhs");
	  	exit(0);
	  }	
     }
	  //Kapoios upologismos...//
	  sum_bytes=M*N*sizeof(double)+M*sizeof(double*)+sizeof(double**);
      printf("\nO xwros pou desmeuthke dunamika einai: %d",sum_bytes);
      
	  
	    //Apodesmeysh mnhmhs//
	    for(i=0;i<M;i++)
	     free(p[i]);
	     free(p);
   
   return 0;
}
