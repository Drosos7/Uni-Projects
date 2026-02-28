#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100
typedef struct{
	char name[N];
	int AM;
	float average;
	
}Student;

int main()
{
	Student p[3];	
	int i; 
	float max;
	char max_on[N];
	 
	for( i = 0 ; i < 3 ; i++)
	{
		printf("Dwse to onoma/numo:");
		fgets(p[i].name,N,stdin); 
		p[i].name[strcspn(p[i].name, "\n")] = '\0';
		printf("Dwse to AM:");
		scanf("%d",&p[i].AM);
		
		printf("Dwse to meso oro sou:");
		scanf("%f",&p[i].average);
		
		getchar();
	
		if(i==0){
			max=p[i].average;
			strcpy(max_on,p[i].name);
			}
		else 
			if(max < p[i].average)
			{
				max=p[i].average;
				strcpy(max_on,p[i].name);
				}	
				
	}
		printf("\n Kaluteros %s ,me meso oro %.2f",max_on,max);
	
	return 0;
}
