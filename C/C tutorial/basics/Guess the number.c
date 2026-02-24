#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main (void)
{
	int hidden,x,p;
	srand(time(NULL));
	hidden=rand()%101;
	p=0;
	printf("Mantepse ton arithmo pou dothike (1-100):");
	scanf("%d",&x);
	p++;
	
	 while(x!=hidden)
	 {
	    if(x<hidden)
	   { 	
	    printf(" Epeses ejo,dose megalutero:\n",hidden,x);
	    scanf("%d",&x);
        }
	   else 
	   {
	   	printf("Epeses ejo,dose mikrotero:\n",hidden,x);
	   	scanf("%d",&x);
	   }
	    p++;
	 } 	 
	  if(x==hidden)
       printf("To petuxes me thn %d prospatheia",p); 	
	
	
	return 0;
}


