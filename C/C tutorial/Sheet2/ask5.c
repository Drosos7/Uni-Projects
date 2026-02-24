#include <stdio.h>
#include <math.h>

double mysqrt(double  a);

int main()
{
   double x;
   do{
   printf("Dwse thetiko arithmo:");
   scanf("%lf",&x);
  }while(x<0);
  printf("H tetragonikh riza tou arithmou %lf einai kata prosegish:%lf",x,mysqrt(x));
	
	return 0;
}

double mysqrt(double a)
{
	double x2,e=1e-6,x=a;
	do {
        x2 = 0.5 * (x + a / x);
        if (fabs(x2 - x) < e)
            break;
        x = x2;
    } while (1);

    return x2;
}

