#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define M 100
#define N 200

void init_array(int pinakas[M][N],int m,int n);
void print_array(int pinakas[M][N],int m,int n);

int main()
{
 	//Δήλωση στατικού πίνακα 2D και ζητάμε από τον χρήστη να μην υπερβεί το όριο 
	int pinakas [M][N];
	int m,n;
	do{
		printf("Dwse arithmo grammwn pinaka poy thes (1-10):");
		scanf("%d",&m);
		
	}while(m<1||m>10);
	
	do{
		printf("\n Dwse arithmo sthlwn poy thes (2-20):");
		scanf("%d",&n);
	}while(n<2||n>20);
	

	 //Αρχικοποιήση πίνακα με τυχαίους αριθμούς από το 1-100 για να φαιίενται καλύτερα στο consol
	init_array (pinakas,m,n);
	//Εκτύπωση 
	print_array (pinakas,m,n);
	
	return 0;
}

void init_array (int pinakas[][N],int m ,int n)
{
    int i,j;
	srand(time(NULL));
	
	for(i=0; i<m; i++)
	 for(j=0; j<n;j++)
	  pinakas[i][j]=rand()%101;
}

void print_array(int pinakas[M][N],int m,int n)
{
	int i,j;
    for(i=0;i<m;i++)
   {for(j=0;j<n;j++)
     printf("%d\t",pinakas[i][j]);
     printf("\n");
	
		}		


}
