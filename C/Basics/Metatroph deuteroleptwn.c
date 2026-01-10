// dinontai deuterolepta kai emfanizontai ores lepta kai deyterolepta metatrtoph me xrhsh / KAI %//
#include <stdio.h>
main()
{
	int x,ores,up1,lepta,up2,deuterolepta;
	printf("Dose pltihos deuterolepton:");
	scanf("%d",&x);
	ores=x/3600;
	up1=x%3600;
	lepta=up1/60;
	deuterolepta=up1%60;
	
	printf(" %d ores,%dlepta,%d deuterolepta",ores,lepta,deuterolepta);
		
	
	
}
