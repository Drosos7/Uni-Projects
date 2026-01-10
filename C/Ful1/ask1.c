#include <stdio.h>
#include <math.h>
#define pi 3.1415
double E_konou(double r, double h);

int main()
{
	double r,h,E;
	printf("Type the radious:");
	scanf("%lf",&r);
	printf("\nType the height:");
	scanf("%lf",&h);
	printf("\nTo embadon tou konou me aktina %.2lf kai upsos %.2lf,einai %.2lf t.m",r,h,E_konou(r,h));
	return 0;
}
double E_konou(double r, double h)
{
	return pi*r*sqrt(pow(r,2)+pow(h,2))+r;
} 
