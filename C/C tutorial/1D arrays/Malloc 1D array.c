#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int *p;
	int i,n,sum=0;
	printf("Dwse to megethos tou pinaka pou thes:");
	scanf("%d",&n);
	p=malloc(sizeof(int)*n);//Desmeush xwrou gia n akeraies metablhtes se n sunexomenes theseis ths mnhmhs, h malloc epistefei thn & tou protou byte apo ta sunexomena//
	if (!p)
	{
		printf("Apotuxia desmeushs mnhmhs");
		exit (0);
	}
	for(i=0;i<n;i++){
	 p[i]=rand()%101;
	 printf("%d,",p[i]);
    }

	 free(p);
	 return 0;
}
