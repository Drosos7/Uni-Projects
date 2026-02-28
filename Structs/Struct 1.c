//Epegergasia enos pinaka apo stigmiotupa domis//

#include <stdio.h>
#include <stdlib.h>

#define STR_SIZE 100


struct epafi{
	char name[STR_SIZE];
	char phone[STR_SIZE];
};

int main()
{
	struct epafi *pinakas;
	int i,N;
	
	//1.Eisagwgh ths diastashs tou pinaka//
	printf("Dwse plithos epafwn:");
	scanf("%d",&N);
	
	//2. Desmeush mnhmhs //
	pinakas=malloc(sizeof(struct epafi)*N);
	if(!pinakas)
	{
		printf("Adunamia desmeushs mnhmhs!");
		exit(0);
	}
	fflush(stdin);
	for(i=0;i<N;i++)
	{
		printf("\nDwse onomatepwnimo %d-ou atomou:",i+1);
		gets(pinakas[i].name);
		printf("\nDwse tilefwno %d-ou atomou:",i+1);
		gets(pinakas[i].phone);
	}
	
	//4. Ektyposi epafwn//
     printf("\n\n EPAFES \n==============================");
	for(i=0;i<N;i++)
	
		printf("\n%d) %s (%s)",i+1,pinakas[i].name,pinakas[i].phone);
	
	free(pinakas);
	
	return 0;
	
}
	
		
	
	
	

