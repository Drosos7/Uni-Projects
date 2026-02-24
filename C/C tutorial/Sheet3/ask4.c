#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define true 1
#define false 0

void init_2Darray(int **p, int m, int n);
void print_2Darray(int **p,int m,int n);
int check_array(int **p, int m, int n);

int main()
{
	srand(time(NULL));
	//Dhlosh metablhton
	int **p;
	int m,n,i;
	
	//Eidosos dedomenon

  
	
	 do{
		printf("Dwse diastash tetragonikou pinaka MxM:");
		scanf("%d",&m);
	}while(m<=0);

	
	p=(int**)malloc(sizeof(int*)*m);

	 if(!p)
	 {
		printf("Adunamia desmeushs mnhmhs");
		exit(-1);
	  }
		for(i=0;i<m;i++){
		 	p[i]=(int *)calloc(m,sizeof(int));
		 	if(!p[i])
		      {
				printf("Adunamia desmeushs mnhmhs");
				exit(-1);		
				}  }
				
		//Arxikpoihsh me tuxaious
		init_2Darray(p,m,m);
		
		//Ektyposh 
		print_2Darray(p,m,m);
		
		//Elegxos an einai ano trigonikos katw h diagonios
		switch(check_array(p,m,m)){
		    case 1:
		    	{
				printf("Einai anw trigvnikos");
		    	break;}
		    case 2:{
				printf("Einai katw trigwnikos");
				break;}
			case 3:
				{
				printf("Einai diagwnios");
				break;}
			case 4:
			    {
			    	printf("O pinakas einai mhdenikos");
			    	break;
					}	
			default:{
			  printf("Den einai tipota");
			  break;}}
			  			
				//Apodesmeush mnhmhs 
			for(i=0;i<m;i++)
			  free(p[i]);
			 free(p);
				 
				 return 0;
}
void init_2Darray(int **p, int m, int n)
{
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			p[i][j]=rand()%2;
			}
}
void print_2Darray(int **p,int m,int n)
{
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			printf("%d\t",p[i][j]);
			printf("\n");
			}
}

int check_array(int **p,int m,int n)
{
	
	int i,j,is_upper=true,is_lower=true,mhdenikos=true,diagonios=true;
	
	  for(i=0;i<m;i++)
	  	{
		  for(j=0;j<n;j++){
		
            if (p[i][j] != 0) 
                mhdenikos=false;
            

         
            if (i < j && p[i][j] != 0) 
                is_lower = false;
            
           
            if (i > j && p[i][j] != 0) 
                is_upper= false;
                
            if(i==j	&& p[i][j]!=0)
			  diagonios=false;     
				}
        }
   
		if(mhdenikos)
		 return 4;
		if (is_lower && is_upper) 
		  return 3;
		 if(is_upper && diagonios)
		  return 1;
		 if(is_lower && diagonios)
		 return 2;
		 
		  return 0;  
	}
	  
	     	             
					  
