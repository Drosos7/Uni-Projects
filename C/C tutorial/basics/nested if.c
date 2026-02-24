//Deixnei thn leitougria ton aplon emfoliasmenon if else
#include <stdio.h>
main()
{
	int x,y;
	printf("Dose arithmo akeraio:");
	scanf("%d",&x);
	printf("Dose akoma enan:");
	scanf("%d",&y);
	
	if(x==y)
	  printf("%d=%d",x,y);
	else                      //ta kato einai MIA etolh elegxou
       if(x<y)	  
	      printf("%d<%d",x,y);
	    else
          printf("%d>%d",x,y);
		   		  
	
}
