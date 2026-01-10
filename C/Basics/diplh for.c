//Nested loops
#include <stdio.h>
main()
{
	int i,j,sum;
	
	for(i=1;i<=4;i++)
	//pairnei thn timh 1 to i
	{
	   for(j=1;j<=4;j++)
	     {
	     	sum=i+j;
	     	printf("\n%d+%d=%d",i,j,sum);
	
        }
		 
      printf("\n Oloklhrothikan oi epanaliceis gia i ison me %d",i);
      
      
   }
	
	
}
