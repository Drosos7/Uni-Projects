//Deixnei thn xrhsh ths continue //
#include <stdio.h>

int main()
{
	int i;
	
	for(i=0;i<10;i++)
	{
		printf("\nThe number is:%d\n",i);
		 if(i%2!=0)
		 continue;
		 
		printf("Square of this number is , %d:\n",i*i);
	}
	
	return 0;
}
