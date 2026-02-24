#include <stdio.h>
#include <math.h>
//Ypologizei tis rizes 2bathmias ejisoshs//
int rizes(float a, float b, float c, float *x1, float*x2 );

int main()
{
	float a,b,c,x1,x2;
	int res;
	
	printf("Dwse to a ths exisoshs:");
	scanf("%f",&a);
	printf("\nDwse to b ths exisoshs:");
	scanf("%f",&b);
	printf("\nDwse to c ths exisoshs:");
	scanf("%f",&c);
	
	res=rizes(a,b,c,&x1,&x2);
	 
	 if(res!=0)
	   if(res==1)
	    printf("Exei mia diplh riza thn %f",x1);
	    else printf("Oi rizes einai %.2f kai %.2f",x1,x2);
	 else printf("Den exei pragmatikes rizes");   
	 return 0;   
}

int rizes(float a, float b, float c, float *x1, float*x2 )
{
	float D;
	
	 D=pow(b,2)-4*a*c;
	 
	 if(D<0||a==0&&b==0&&c==0)
	  return 0;
	 else if(D>0)
	 {
	  *x1=(-b+sqrt(D))/(2*a);
	  *x2=(-b-sqrt(D))/(2*a);
       return 2;
     }
     else
	 { 
     *x1=-b/(2*a);
     return 1;
      }
 }

