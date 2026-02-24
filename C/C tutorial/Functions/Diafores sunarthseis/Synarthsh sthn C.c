/*Multiply.c:Programma gia ton ypologismo tou ginomenoy duo arithon me xrhsh sunarthshs ginomeno */
#include <stdio.h>

//protypo synarthshs ginomeno (typos onoma orismata)
 int ginomeno    (int x, int y);

main ()
{
      int a,b,c;
/* Eisodos 1ou arithmoy*/
  printf("Eisagete ton proto arithmo 1-100:");
  scanf("%d",&a);
  
  /*Eisodos deuterou arithmou */
  printf("Eisagete deutero arithmo 1-100:");
  scanf("%d",&b);
  
  c=ginomeno(a,b);//klhsh ths sunarthshs//
  printf("To ginomeno tou %d kai tou %d, einai: %d\n",a,b,c);
}
/*H synarthsh epistefei to ginomeno ton orismaton ths , soma sunarthshs */
int ginomeno(int x,int y)
{
	return (x*y);
	
}

