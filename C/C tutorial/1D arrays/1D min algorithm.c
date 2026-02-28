#include <stdio.h>

main(void) 
{
	int p,flag,i,min_pos;
	float N,min,A[20];
	flag=0;
	p=0;
	printf("Type a number for N (2-20):");	
	 do{
	 	  if(p==0)
	 	   scanf("%f",&N);
	  	  else if(p>0)
	      {		
	  	   printf("Edoses timh ektos orion,janadose:");
	  	   scanf("%f",&N);
          }
		   flag=(N<2||N>20);
		   if(flag)
		    p++;
	   }while(flag);
	   
	//Initianlisation as a zero array//
	  
	   for(i=0;i<20;i++)
	   { 
	   A[i]=0;
	   }
	    
         for(i=0;i<(int)N;i++)
		 {
          printf("Give data for %d position of array:\n",i+1);
		  scanf("%f",&A[i]);
		  if(i==0)
		   min=A[i];
	  	  else
			 if(min>A[i])
			 min=A[i];   
        }
		printf("Arrays minimum is: %.2f , %d ",min,(int)A[(int)N+1]);//checking if the array did initialised with 0//
		return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	

