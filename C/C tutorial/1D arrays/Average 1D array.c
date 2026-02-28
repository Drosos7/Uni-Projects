#include <stdio.h>

main() 
{
	int p,flag,i;
	float N,sum,A[20],mesos_oros;
	flag=0;
	p=0;
	sum=0;
	printf("Dose ena arithmo N 2-20:");	
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
	   
	//Arxikopoihsh tou pinka me max diastaseis=20 me mhden//
	  
	   for(i=0;i<20;i++)
	   { 
	   A[i]=0;
	   }
	    
         for(i=0;i<(int)N;i++)
		 {
          printf("Dose arithmo pou thes gia thn %d thesh tou pinaka:\n",i+1);
		  scanf("%f",&A[i]);
		  sum+=A[i];	
        }
        mesos_oros=sum/N;
	   	printf("O mesos oros ton stoixeion tou pinaka A, einai o: %.2f",mesos_oros);
}
	
	
