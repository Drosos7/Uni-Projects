//Dexetai treis akeraious kai tous tajinomei se aujousa seira shmantikh !!!!!!//
#include <stdio.h>
main()
{
	int x,y,z,max;
	
	printf("Dose akeraio:");
	scanf("%d",&x);
	
	printf("dose kai allon:");
	scanf("%d",&y);
	
	printf("Dose kai trito:");
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

