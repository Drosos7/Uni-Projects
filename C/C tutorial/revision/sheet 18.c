#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

typedef struct{
	int id;
	char name[N];
	float price;
	int quantity;
}product;

int main()
{
	int choice;
	product item1={0,"",0.0,300};
	do{
	printf("Scan barcode:");
	scanf("%d",&item1.id);
	}while(item1.id!=12345);
	
	printf("\nType name of item:");
	scanf("%s",item1.name);
	
	
	
	printf("\nPrice:");
	scanf("%f",&item1.price);
	
	printf("Total value of stock is:%f",item1.price*item1.quantity);

	return 0;
}
