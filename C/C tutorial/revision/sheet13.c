#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *a;
	a=(int *)malloc(sizeof(int));
	if(!a)
	{
		fprintf(stderr, "Error allocating memory!");
		exit(1);
	}
	printf("Dwse akeraio:");
	scanf("%d",a);
	printf("Dwsate ton:%d\n",*a);
	
	free(a);
	return 0;
}
