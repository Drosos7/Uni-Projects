//Eukleidia apostash //
#include <stdio.h>
#include <math.h>

typedef struct point{
	float x;
	float y;
}shmeio;

void eisagogh_suntetagmenon( shmeio *s);
float eukleidia_apostasi( shmeio A, shmeio  B);

int main()
{
	 shmeio A,B;
	
	printf("1o shmeio\n");
	eisagogh_suntetagmenon(&A);
	printf("Deutero shmeio:\n");
	eisagogh_suntetagmenon(&B);
	
	
	printf("\n H Eukleidia apostash tous einai:%.3f",eukleidia_apostasi(A,B));
	
	return 0;
}
void eisagogh_suntetagmenon( shmeio *s)
{
	printf("Dwse to x tou shmeiou:");
	scanf("%f", &s->x);
    printf("Dwse to y tou shmeiou:");
	scanf("%f",&s->y);
}
float eukleidia_apostasi( shmeio A, shmeio  B)
{
	return sqrt(pow(A.x-B.x,2)+pow(A.y+B.y,2));
}
