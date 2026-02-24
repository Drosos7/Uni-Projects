#include <stdio.h>

int main()
{
	float a,min,max;
	printf("Dwse arithmo(0 gia termatismo):");
	scanf("%f",&a);
	min=a;
	max=a;
	while(a!=0)
	{
		if(a<min)
			min=a;
		if(a>max)
			max=a;
		printf("Dwse arithmo(0 gia termatismo):");
		scanf("%f",&a);		
	}
	if(max!=0)
	{
		printf("Max is:%.3f",max);
		printf("\n Min is:%.3f",min);
		}
	else printf("Den ebales kanenan arithmo!");	
	
return 0;	
}
