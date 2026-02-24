#include <stdio.h>
int is_prime(int n);

main(){
	int x,y,arxh,telos,Nai,p,pl=0;
	 //elegxos eisdou//
	do{
	printf("Dose fysiko arithmo:");	
	scanf("%d",&x);
    }while(x<=0);
	do{
	printf("Dose allon enan diaforetiko:");
	scanf("%d",&y);
     }while(y<=0|| y==x);
       //Kalesma ana pote prepei kai ftiaxno to sosto zeugos analoga me to poio einai megaltero//
	  p=0;
	 if(x<y)
	  { arxh=x;
	    telos=y;
	     while(arxh<=telos)
	    {
	    	Nai=is_prime(arxh);
	    	if(Nai==1){
	    		pl++;
	    		if(p==0){
	    	    printf("Oi prwtoi aritmoi apo to %d ews to %d ,einai oi ejhs:\n",x,y);
	    	    p++;}
	    	printf("O arithmos %d einai prwtos\n",arxh);
	       }
	    	arxh++;
		}
	   
 	}
	   else 	   
      { 
	    arxh=y;
	    telos=x;
	    while(arxh<=telos)
	    {
	    	Nai=is_prime(arxh);
	    	if(Nai==1){
	    		pl++;
	    	   if(p==0){
	    	   printf("Oi prwtoi aritmoi apo to %d ews to %d ,einai oi ejhs:\n",x,y);
	    	   p++;}
	    	 printf("O arithmos %d einai prwtos\n",arxh);
	       }
	    	arxh++;
		}
	 }
	   	 if(pl!=0)
            printf("\n To Plithos tous einai %d:",pl);
	   
}
	   
	   	
	   	
int is_prime (int n){
	int i;
	
    if(n==1)
     return 0;
    else{
     for(i=2;i<=n-1;i++)
      {
	  if(n%i==0)
      return 0;
       
    }
    return 1;
   }
	
}
	
