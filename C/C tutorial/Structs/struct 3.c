#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 80

typedef struct person{
	char *onoma;
	char *diefthinsi;
	char *nomos;
	char  *arithmos;
}RECORD;

void read_record(RECORD *p);
void print_record(RECORD x,int n);
void init_record(RECORD *p);
void free_record(RECORD x);
void copy_record(RECORD *A,RECORD B);

int main()
{
	RECORD *eggrafes,x;
	int i,N,choice;
	char *ap[4];
	
	printf("Dwse plhtos eggrafwn:");
	scanf("%d",&N);
	getchar();
	
	eggrafes=malloc(sizeof(RECORD)*N);
	if(!eggrafes)
	{
		printf("Adunamia desmeushs mnhmhs");
		exit(0);
	}
	
	for(i=0;i<N;i++)
	init_record(&eggrafes[i]);
	init_record(&x);
	
	for(i=0;i<N;i++)
	{
	printf("%d-o atomo\n",i+1);	
	read_record(&eggrafes[i]);
     }
	  
     for(i=0;i<N;i++)
	 print_record(eggrafes[i],i);
	 printf("Epileske eggrafi gia antigrafi (0-%d):",N-1);
	 scanf("%d",&choice);
	 if(choice>=0&&choice<=N-1)
	 {
	 copy_record(&x,eggrafes[choice]);
	 printf("\nEktupwsi stigmiotupou:\n");
     printf("_________________________");
	 print_record(x,choice);
     }
	 
	for(i=0;i<N;i++)
	 free_record(eggrafes[i]);
    free_record(x);
    free(eggrafes);
	
	return 0;
}

void read_record(RECORD *p)
{
	printf("Dwse to onoma sou:");
    gets(p->onoma);   
	printf("Dwse thn dieufthnsi sou:");
    gets(p->diefthinsi);
    printf("Dwse ton arithmo sou:");
    gets(p->arithmos);
	printf("Dwse ton nomo pou meneis:");
	gets(p->nomos);
	putchar('\n');
	system("pause");

}

void print_record(RECORD x,int n)
{
	printf("\nTa stoixeia tou %d record einai:\n",n+1);
	printf("ONOMATEPONUMO:");
	puts(x.onoma);
	printf("DIEUFTHINSI KATOIKIAS:");
	puts(x.diefthinsi);
	printf("ARITHMOS THLEFONOU:");
	puts(x.arithmos);
	printf("NOMOS EPIKRATIAS:");
	puts(x.nomos);
	putchar('\n');
	
}

void init_record(RECORD *p)
{
	p->onoma=malloc(sizeof (char)*SIZE);
	if(!p->onoma)
	{
		printf("Apotuxia desmeushs mnhmhs");
		exit(0);
	}
	
	p->diefthinsi=malloc(sizeof(char)*SIZE);
	if(!p->diefthinsi)
	{
		printf("Apotuxia desmeushs mnhmhs");
		exit(0);
	}
	
	p->arithmos=malloc(sizeof(char)*SIZE);
		
	if(!p->arithmos)
	{
		printf("Apotuxia desmeushs mnhmhs");
		exit(0);
	}
	p->nomos=malloc(sizeof(char)*SIZE);
		if(!p->nomos)
	{
		printf("Apotuxia desmeushs mnhmhs");
		exit(0);
	}

	
}

void free_record(RECORD x)
{
	free(x.onoma);
	free(x.diefthinsi);
	free(x.arithmos);
	free(x.nomos);
}


void copy_record(RECORD *A, RECORD B)
{
	strcpy(A->onoma,B.onoma);
	strcpy(A->diefthinsi,B.diefthinsi);
	strcpy(A->arithmos,B.arithmos);
	strcpy(A->nomos,B.arithmos);
}
