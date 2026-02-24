//Comparison of three variables and printing them in descending order
#include <stdio.h>
main()
{
	int x,y,z,max;
	
	printf("Type first integer:");
	scanf("%d",&x);
	
	printf("Type second integer:");
	scanf("%d",&y);
	
	printf("Type third integer:");
	scanf("%d",&z);
	
	if (x>y) 			  
	{
        if (y>z)
		{	
		 max=x;
		 printf("%d>%d>%d",max,y,z);
	}
		else if(x<z)
		{
		 max=z;
		 printf("%d>%d>%d",max,x,y);  		 
		 }
         else if(x==z){
         	max=z;
         	printf("%d=%d>%d",max,x,y);
		 }
		  else if (y==z)
	     {
		     max=x;
	       printf("%d>%d=%d",max,y,z);
         }    
	}
	else if (x<y)
    {
    	if (x>z)
		{	
		 max=y;
		 printf("%d>%d>%d",max,x,z);
	}
		else if(y<z)
		{
		 max=z;
		 printf("%d>%d>%d",max,y,x);  		 
		 }
         else if(y==z){
         	max=y;
         	printf("%d=%d>%d",max,z,x);
		 }
		  else if (x==z)
	     {
		     max=y;
	       printf("%d>%d=%d",max,x,z);
         }    
	
        
    }
    else if (x=y)
	{  		 		  	 	 
	  if (x>z)
		{	
		 max=x;
		 printf("%d=%d>%d",max,y,z);
	}
		else if(x<z)
		{
		 max=z;
		 printf("%d>%d=%d",max,x,y);  		 
		 }
         else if(x==z){
         	max=z;
         	printf("%d=%d=%d",max,x,y);
		 }
		 
    }
	

}

