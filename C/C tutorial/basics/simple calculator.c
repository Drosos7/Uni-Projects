//Xrhsh if.. else if me block entolon, aplh arithmomhxanh//

#include <stdio.h>
main()
{
	int x,y,z;
	int telestis;
	
	printf("Dose arithmo:");
	scanf("%d",&x);
	printf("Dose allo arithmo:");
	scanf("%d",&y);
	printf(" 1 gia prosthesh (+),\n 2 gia afairesh(-) ,\n 3 gia diairesh(/) ,\n 4 gia pollaplasiasmo(*) p\n 5 gia upoloipo diareshs(&) ,\n");
	scanf("%d",&telestis);
	if (telestis==1)
	{
		z=x+y;
		printf("%d+%d=%d",x,y,z);
    }
    else if (telestis==2)
	{
		z=x-y;
		printf("%d-%d=%d",x,y,z);
    }
	else if(telestis==3)
	{
		z=x/y;
		printf("%d/%d=%d",x,y,z);
	}
	else if(telestis==4)
	{
		z=x*y;
		printf("%d*%d=%d",x,y,z);
	}
	else if(telestis==5)
	{
		z=(int)x%(int)y;
		printf("%d%%%d=%d",x,y,z);
		
	}
	
  
}
