#include <stdio.h>
// Aplo paradeigma xrhshs kai klhshs synarthshs kai h domh ths //
//protypo
void myprint();
	
int main() 
{
/*a simple program*/
 
  int thesh;
  float num,c;
  printf("Ti thesh na exei?"); 
  scanf("%d",&thesh);
  printf("Dose kai arithmo poy theleis:");
  scanf("%f",&num);
  myprint();//Klhsh
  printf("O arithmos poy briskete sthn thesh %d,einai o arithmos: %2.f\n",thesh,num);
  c=(thesh*num)/2;
  printf("to miso toy ginomenoy tous einai:%2.f",c);

  return 0;
}
//SOMA
void myprint()
{
	printf(" Tha emfanistei h thesh kai o arithmos:\n");
	
}
