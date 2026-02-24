//Efaromgh dunamikhs desmeushs mnhmhs se 2D : A Statikos pinakas , B dunamikos

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define  N 20
int main()
{
    int A[N][N],i, j, n;
    int **B;
    srand(time(NULL));

    do {
        printf("Dwse diastash (5-20): ");
        scanf("%d", &n);
    } while(n < 5 || n > 20);
     /* ===== ”‘¡‘… œ” ¡ÕŸ ‘—…√ŸÕ… œ” –…Õ¡ ¡” ===== */
    printf("\nO pinakas A arxikopoihthike\n");

    for(i = 0; i < n; i++){
        for(j = 0; j <=i; j++)
            A[i][j] = 1 + rand() % 9;
        for(j=i+1;j<n;j++)
                A[i][j] = 0;
            }

    printf("Katw trigwnikos Statikos Pinakas A:\n");
    for(i = 0; i < n; i++)
    {
        printf("\t[");
        for(j = 0; j < n; j++)
        {
            printf("%d", A[i][j]);
            if(j < n - 1) 
			printf(",");
        }
        printf("]\n");
        
        //ƒ’Õ¡Ã… œ” ¡ÕŸ ‘—…√ŸÕ… œ” –…Õ¡ ¡”
    }
    
    B= (int**)malloc(n * sizeof(int*));
    if(!B)
	{ printf("Apotuxia desmeushs mnhmhs");
	 exit(0);
     }

    for(i = 0; i<n; i++)
    {
        B[i] = malloc((i+1) * sizeof(int));
        if(!B[i])
		{
			printf("Apotuxia desmeushs mnhmhs");
			exit(0);
		} 
    }

    /* ¡ÌÙÈ„Ò·ˆﬁ ÙÔı ¡ ÛÙÔÌ ¬ */
    for(i = 0; i < n; i++)
        for(j = 0; j <=i; j++)
            B[i][j] = A[i][j];

    /* ≈ÍÙ˝˘ÛÁ */
    printf("\nKatw Trigwnikos Dynamikos Pinakas B:\n");
     for(i = 0; i < n; i++)
    {
        printf("\t[");
        for(j = 0; j <= i; j++)
        {
            printf("%d", B[i][j]);
            if(j<n-1)
            printf(",");
        }
        for(j=i+1;j<n;j++){
         printf("0");
         if(j<n-1)
          printf(",");
		  }
         
        printf("]\n");
    }
  

    for(i = 0; i < n; i++)
        free(B[i]);
    free(B);

   return 0;
}

