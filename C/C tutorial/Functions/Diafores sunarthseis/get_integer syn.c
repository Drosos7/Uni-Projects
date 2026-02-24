//asksh me sunarthsh proth episimh//
#include <stdio.h>

int get_integer(int start,int finish);

main()
{    
      //Diavasma eisoudou//
    int a,b,n,res;
    printf("Dwse to a:");
    a=get_integer(1,10);
    printf("Dwse to b:\n");
    b=get_integer(1,10);
    printf("Dwse to n:\n");
    n=get_integer(2,5);
    res=n*(a-b);
     printf("To apotelsma einai: %d",res);
}

//Ypologismos ths epistefoenhs timhs//
int get_integer(int start, int finish)
{
	int x;
	 do{
	 	printf("\nDose timh apo %d ews %d:", start, finish);
	 	scanf("%d",&x);
	 	} while(x<start || x>finish);
	 	
	 	return x;
				   
}
	
	
	
	

