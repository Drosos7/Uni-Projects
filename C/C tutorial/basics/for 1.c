#include <stdio.h>
main()
{
	int i,gin,x;
	gin=1;
	
	for (i=1;i<=3;i++)
	{
	    printf("\nEisagete ton %d-o arithmo:",i);
		scanf("%d",&x);
		gin*=x;
	}
	printf("To ginomeno tous einai to: %d",gin);
}
