#include <stdio.h>
//Dikh mou apopeira meso tou amuntikou programmatismou na ftaijo to lock screen tou  kinhtou mou /trapeikhs kartas me pin//
  main()
{ 
   unsigned int x;
   int n,max_n,pr,tr,ptr;
	n=0;
	max_n=5;
	tr=0;
	 ptr=0;
	 
	 
	 
	do{
		
		if (n==0)
	   {
	     printf("Bale to pin sou:\n");
	     printf("Pin is 4 digits!\n");	   
	   	 scanf("%d",&x);
	   	  do {	 
	   	      if(tr>0){
				 
			   printf("Pin is 4 digits!\n");
			   scanf("%d",&x);}
			  
	   	     tr++;
	   	  
   	   }while(x<1000 || x>9999 && tr<6&& ptr<6);
   	   
   	   }
	  
	    else{
		
	    	
	      pr=max_n-n;
		   printf("Lathos pin exeis akoma %d prosprathies:\n",pr);
	        do {	 
	   	      if(tr<5&&x<1000||x>9999){
			   printf("Pin is 4 digits!\n");
			   scanf("%d",&x);}
               else{
               	printf("Edoses lathos tetrapsifio\n");
               	scanf("%d",&x);}
               	ptr++;
			   
			   		    
	   	       tr++;
	   	  
   	   }  while(x<1000 || x>9999 && tr<6&&ptr<6);
         }
	   
		  
	    n++;
       
       }while(x!=4342&&tr<6&&ptr<6);
	
	  if(n<6&&tr<6&&ptr<6)
	  {
	    if(n==1)
	     printf("Eisai magkas xreiasthkes mono %d prospathia tetrapsifiou kai %d prospathies sto na baleis kapoion tetoio!",n,tr);
	    else
	     printf("Eisai magkas xreiasthkes mono %d prospathies tetrapsfion kai %d propsathies sto  na baleis enan tetoio",n,tr);
      }
	  else{
	  
	     
	     if(n>5)
	      printf("Ejantlises tis prospathies tetrapsifion pou sou dothikan\n");
         else if(tr>5)
		   printf("Ejantlises tis prospaheies sou sto na baleis tetrapsifious\n"); 	
          else 
	         printf("Ejantilses tis prospathies na doseis ton sosto tetrapsifio"); 
			     
	         printf("Se kathe periptosh, janadokimsate agrotera..."); 
	    }
       
}
