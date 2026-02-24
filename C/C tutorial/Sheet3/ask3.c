#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void init_2Darray(int **p, int m, int n);
void print_2Darray(int **p,int m,int n);
int check_araios(int **p, int m, int n);

int main()
{
	srand(time(NULL));
	//Dhlosh metablhton
	int **p;
	int m,n,i;
	
	//Eidosos dedomenon
	do{
		printf("Dwse grammes:");
		scanf("%d",&m);
	}while(m<=0);
	
	do{
		printf("Dwse sthles:");
		scanf("%d",&n);
	}while(n<=0);
	
	p=(int**)malloc(sizeof(int*)*m);

	 if(!p)
	 {
		printf("Adunamia desmeushs mnhmhs");
		exit(-1);
	  }
		for(i=0;i<m;i++){
		 	p[i]=(int *)calloc(n,sizeof(int));
		 	if(!p[i])
		      {
				printf("Adunamia desmeushs mnhmhs");
				exit(-1);	
				}  }
				
				//Arxikpoihsh me tuxaious
				init_2Darray(p,m,n);
				//Ektyposh 
				print_2Darray(p,m,n);
				
				if(check_araios(p,m,n))
				 	printf("\n\nO Pinakas einai araios!(0=>80%% stoixeiown)");
				else 
				
				printf("\n\nO Pinakas den einai araios!") ;
				
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

int check_araios(int **p,int m, int n)
{
	int i,j,cnt=0,whole=1;
	whole=m*n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		if(p[i][j]==0)
		 cnt++;
	}
	if( (cnt*100.0/whole)>=80)
	return 1;
	return 0;
}
