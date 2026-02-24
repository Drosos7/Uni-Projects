#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double D (float a,float b, float c);
void print_rizes(double D,float a,float b,float c);

int main()
{
	
	float a,b,c;
	do{
	printf("Dwse to a:");
	scanf("%f",&a);
	}while(a==0);
	
	printf("\nDwse to b:");
	scanf("%f",&b);
	
	printf("\nDwse to c:");
	scanf("%f",&c);
    
	print_rizes(D(a,b,c),a,b,c);

	
	return 0;
}

double D(float a, float b,float c)
{
	
	return pow(b,2)-(4*a*c);
}

void print_rizes(double D,float a, float b, float c)
{
	float x1,x2;
	if(D==0){
	 x1=-b/(2*a);
	 printf("\nDiplh riza thn %.2f",x1);
   }
	else if(D>0){
	 x1=(-b+sqrt(D))/(2*a);
	 x2=(-b-sqrt(D))/(2*a);
	 printf("\nPragmatikes rizes thn %.2f kai %.2f",x1,x2);}
	 else 
	 printf("\nDen exei pragmatikes rizes"); 
}


