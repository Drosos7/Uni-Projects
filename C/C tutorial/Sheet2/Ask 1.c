#include <stdio.h>
#include <math.h>
int f(int n);
int main()
{
	int x;
	printf("Dwse enan akeraio:");
	scanf("%d",&x);
	if(f(x)!=0)
	 printf("Den isxuei h en logo sxesh!");
	else 
	printf("H sxesh isxuei."); 
	
	return 0;
}
int f(int n)
{
	int i,sum=0;
	
	for(i=0;i<=n;i++)
		sum+=pow(i,2);
	if(sum==(int)(n*(n+1)*(2*n+1))/6)
	return 0;
				
	return 1;			

}
