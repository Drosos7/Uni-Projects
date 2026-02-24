#include <stdio.h>
#include <math.h>

int is_even(int n);
int is_square(int n);
int is_odd(int n);
int is_cube(int n);

int main(void)
{
	int ar;
	
	printf("Dwse ena akeraio arithmo:");
	scanf("%d",&ar);
		 
		 if(is_even(ar)==1)
		 printf("O arithmos einai artios\n");
		 
	     if( is_odd(ar)==1)   
		 printf("O arithmos einai perritos\n");
		 
		 if(is_square(ar)==1)
		   printf("Einai tetargono  arithmou\n");
		   
	     if(is_cube(ar)==1)
		   printf("Einai kubos arithmou\n");	 	   
		   return 0;
	}
	
	int is_even(int n)
	{
		if(n%2==0)
		return 1;
		else 
		return 0;
	}
				 	 
	int is_odd(int n)
	{
		if(n%2==1)
		return 1;
		else 
		return 0;
		
	}
	
	
	int is_square (int n)
	{
		int i;
		
		for(i=1; i<=n; i++)
		 {
			if(i*i==n)
			   return 1;
			else if (i*i>n)
			   return 0;
		}
	}
	
	int is_cube (int n)
	{
		int i;
	 	for(i=1;i<=n;i++)
		 {
		 	if(i*i*i==n)
		 	  return 1;
	        else if(i*i*i>n)
			  return 0;
	     }
			  
	}
		 
		 
	
	
	
	
	
	
	
	
	
	
	
	
	

