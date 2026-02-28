#include <stdio.h>
#define N 10
main()
{
	int a[N];
	int i,sum=0;
	 for(i=0;i<N;i++)
	 {
	 	printf("Eisagete to %d stoixeio tou pinaka: ",i+1);
	 	scanf("%d",&a[i]);
	 	sum+=a[i];
	 }
	 printf("\n To athoirsma ton stoixeion tou pinaka einai: %d",sum);
	
}
