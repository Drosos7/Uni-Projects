//Programma pou emfanizei ton megalutero apo treis akeraious arithmous shmnatikh askshs deixnei tis periptoseis syhkreiseon metajy trion metablhton//
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
        if (x>=z) max=x;	
		else max=z;
	     printf("O megaluteros ton 3on einai o %d",max);
    }
	else if (x<y)
    {
	
        if (y>=z) max=y;
	    else max=z;
	       printf("O megaluteros ton 3on einai o %d",max);
    }
    else if (x=y)
	{  		 		  	 	 
	      if (x>=z)  max=x;  		     
		  else max=z;
		    printf("O megalyteros ton 3on einai o %d",max);   
    }
	

}
