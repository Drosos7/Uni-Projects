//Askhsh me pointers//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 1000

// Πρωτότυπα συναρτήσεων
int sum_array(int *p, int n);
float mo_array(int *p, int n); // Επιστρέφει float και δέχεται τον πίνακα
void init_array(int *p, int n, int a, int b);
void max_array(int *p, int n);
void min_array(int *p, int n);
void print_array(int *p, int n);

int main() {
    int A[N], choice , a, b, size = 0;
    int has_size = 0;       // Flag: έχει δοθεί μέγεθος;
    int is_initialized = 0; // Flag: έχει γεμίσει ο πίνακας;

    srand(time(NULL));

    while (1)
	 {
	 	system("cls");
            printf("\n\t--- MENU ---\n");
            printf("1. Eisagogh megethous (Set Size)\n");
            printf("2. ATHROISMA (Sum)\n");
            printf("3. MESOS OROS (Average)\n");
            printf("4. Arxikopoihsh (Fill with Random)\n");
            printf("5. Euresh max (Find Max)\n");
            printf("6. Euresh min (Find Min)\n");
            printf("7. Ektyposh (Print)\n");
            printf("8. Exodos (Exit)\n");
            printf("Epilogh: ");
            scanf("%d", &choice);
        

        switch (choice) {
            case 1:
                printf("Dwse megethos pinaka (max %d): ", N);
                scanf("%d", &size);
                if (size > 0 && size <= N) {
                    has_size = 1;
                    is_initialized = 0; // Αν αλλάξει το μέγεθος, πρέπει να ξαναγεμίσει (επιλογή 4)
                    printf("To megethos oristike se %d. Twra prepei na gemiseis ton pinaka (Epilogh 4).\n", size);
                } else {
                    printf("Lathos megethos! Dokimase xana.\n");
                    has_size = 0;
                }
        
                break;
            case 4:
                if (!has_size) {
                    printf("SFALMA: Prepei prota na doseis megethos (Epilogh 1)!\n");
                } else {
                    printf("Dwse ta akra [a, b]: ");
                    scanf("%d %d", &a, &b);
                    // Έλεγχος αν το α είναι μικρότερο από το β!! DES THN ENTOLH ANTIMETAESHS STA ORISMATA!!!
                    if (a > b) { int temp = a; a = b; b = temp; }
                    init_array(A, size, a, b);
                    is_initialized = 1;
                }
                
                break;

            case 2: case 3: case 5: case 6: case 7:
                // Έλεγχος αν ο πίνακας είναι έτοιμος για επεξεργασία
                 if(!has_size)
                  printf("\nPress 1. for defining the size!\n");
                else if (!is_initialized) 
                    printf("SFALMA: O pinakas den exei gemisei! Prepei na patiseis to 4.\n");
                 else {
                    if (choice == 2) printf("\nTo athroisma einai: %d\n", sum_array(A, size));
                    if (choice == 3) printf("\nO mesos oros einai: %.2f\n", mo_array(A, size));
                    if (choice == 5) max_array(A, size);
                    if (choice == 6) min_array(A, size);
                    if (choice == 7) print_array(A, size);
                }
                    break;
            case 8:
            	{
                printf("EXIT...\n");
                  exit(0);
				 }
			default:
			 printf("Option not found\n");	
			 break; 
        }
        system("pause");
    }
    return 0;
}

// --- Υλοποίηση Συναρτήσεων ---

void init_array(int *p, int n, int a, int b) {
    int i;
    for (i = 0; i < n; i++) {
        *(p + i) = a + rand() % (b - a + 1);
    }
    printf("O pinakas gemise me tyxaious arithmous.\n");
}

int sum_array(int *p, int n) {
    int sum = 0, i;
    for (i = 0; i < n; i++) {
        sum += p[i];
    }
    return sum;
}

float mo_array(int *p, int n) {
    int sum = sum_array(p, n); // Χρησιμοποιούμε την ήδη υπάρχουσα συνάρτηση sum
    return (float)sum / n;
}

void max_array(int *p, int n) {
    int i, max = p[0];
    for (i = 1; i < n; i++) {
        if (p[i] > max) max = p[i];
    }
    printf("\nMAX value is: %d\n", max);
}

void min_array(int *p, int n) {
    int i, min = p[0];
    for (i = 1; i < n; i++) {
        if (p[i] < min) min = p[i];
    }
    printf("\nMin value is: %d\n", min);
}

void print_array(int *p, int n) {
    int i;
    printf("\nArray: [ ");
    for (i = 0; i < n; i++) {
        printf("%d%s", p[i], (i == n - 1) ? "" : ", ");
    }
    printf(" ]\n");
}
