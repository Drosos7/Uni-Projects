#include <stdio.h>
#include <math.h>
float mo (double *pinakas,int n);
void print();
void eisagogh_pinaka();

int main()
{
	int choice,x;
	float y;
	
	do{
		printf("Dwse enan arithmo  (1-4):");
		scanf("%d",&choice);
	}while(choice<1||choice>4);
	
    switch(choice)
	{
		case 1:
			printf("\nDwse enan akeraio:");
			scanf("%d",&x);
			printf("%d^2=%d",x,(int)pow(x,2));
			break;
		case 2:
			print();
			break;
		case 3:
		 printf("Dwse enan float:");
		 scanf("%f",&y);
		 printf("\nTo 1/4 einai:%.4f",y/4);
		 break;
		case 4:
		 eisagogh_pinaka(); 	
	  break;
  }
	
}




void print()
{
	int n,i;
	printf("Dwse enan akeraio N:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	 printf("\nKalimera");
}

void eisagogh_pinaka()
{
	double array[5];
	int i;
	
	for(i=0;i<5;i++){
	
	 printf("\n Plhktrologhse thn %d timh:",i+1);
	 scanf("%lf",&array[i]);
	 }
	 
	 printf("O mesos oros twn timvn toy pinaka einai:%.2f",mo(array,5));
	

}

float mo (double *pinakas,int n)
{
	double sum=0,mesos;
	int i;
	
	for(i=0;i<n;i++)
	 sum+=*(pinakas+i);
	 mesos=sum/n;
    return mesos;
}


