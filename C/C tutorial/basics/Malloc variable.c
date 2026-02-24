//Dynamikh desmeysh mnhmhs gia mia metablhth//
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p;//dhlosh pointer sthn metablhth, ua mporouse na einai opoiodhpote tupou//
	p=malloc(sizeof(int));
	
	if(!p)
	{
		printf("Apotuxia desmeushs mnhmhs gia thn metabthth");
		exit (0);
	}
	printf("Dwse mia akeraia timh :");
	scanf("%d",p);
	printf("%d",*p);
	
	
	free(p);//Entolh apeleytheroshs mnhmhs//
	return 0;
}
