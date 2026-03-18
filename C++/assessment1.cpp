//assessment1.cpp
#include <cstdio>
#include <ctime>
#include <cstdlib>
#include <cmath>

typedef struct {
    int x, y;
} point;

typedef struct {
    double x, y;
} fpoint;

void init_array(point *p, int N, int min, int max);
void init_floatarray(fpoint *p, int N, double min, double max);
void print_array(point *p,int N);
void print_floatarray(fpoint * p, int N);
double get_Dist(point &p);
double get_Dist(fpoint &p);

int max_point(point *p, int N);
int max_point(fpoint *p, int N);

int main() {
    srand(time(NULL));
    int N,pos_max,pos_maxf;
    
    do {
        printf("Give number of points (2-10): ");
        scanf("%d", &N);
    } while(N < 2 || N > 10); //Μικρες τιμες για μορφοποιημενη εξοδο να βγαινουν ωραια οι πινακες

    point *p1;
    if(!(p1=(point*)malloc(sizeof(point)*N)))
    {
        perror("Error allocating neccesary memmory!");
        exit(1);
    }
    
    init_array(p1,N,-10,10);
    print_array(p1,N);
    pos_max=max_point(p1,N);
    printf("\nMax integer point: (%d,%d)\n", p1[pos_max].x, p1[pos_max].y);

    fpoint *p2;
    if(!(p2=(fpoint *)malloc(sizeof(fpoint)*N)))
    {
        perror("Error allocating memmory!");
        exit(1);
    }
    init_floatarray(p2, N, -10.0, 10.0);
    print_floatarray(p2,N);
    pos_maxf = max_point(p2, N);
    printf("\nMax float point: (%.2f, %.2f)\n\n", p2[pos_maxf].x, p2[pos_maxf].y);

    free(p1);
    free(p2);
    return 0;
}

void init_array(point *p, int N, int min, int max) {
    for(int i = 0; i < N; i++)
     {
        p[i].x =min+(rand() % (max - min + 1));
        p[i].y = min+(rand()%(max - min + 1));
}
}

void init_floatarray(fpoint *p, int N, double min, double max) {
    for(int i = 0; i < N; i++) {
        p[i].x = min + ((double)rand() / RAND_MAX) * (max - min);
        p[i].y = min + ((double)rand() / RAND_MAX) * (max - min);
    }
}

void print_array(point *p, int N)
{
    int i;
    printf("\n\n\tIntegers' array:\n");
    printf("[");
    for(i=0; i<N-1;i++)
        printf("(%d,%d),",p[i].x,p[i].y);
    printf("(%d,%d)]",p[N-1].x,p[N-1].y);
}
void print_floatarray(fpoint *p, int N)
{
    int i;
    printf("\n\n\tFloatings' array:\n");
    printf("[");
    for(i=0; i<N-1; i++)
        printf("(%.2f,%.2f),",p[i].x,p[i].y);
    printf("(%.2f,%.2f)]",p[N-1].x,p[N-1].y);
}
int max_point(point *p, int N) {
    int pos = 0;
    double max_dist = get_Dist(p[0]),dist;
    for(int i = 1; i < N; i++) {
        dist=get_Dist(p[i]);
        if(dist > max_dist) {
            max_dist = dist;
            pos = i;
        }
    }
    return pos;
}


int max_point(fpoint *p, int N) {
    int pos = 0;
    double max_dist = get_Dist(p[0]),dist;
    for(int i = 1; i < N; i++) {
         dist = get_Dist(p[i]);
        if(dist > max_dist) {
            max_dist = dist;
            pos = i;
        }
    }
    return pos;
}
double get_Dist(point &p)
{
    return sqrt(pow(p.x, 2) + pow(p.y, 2));
}
double get_Dist(fpoint &p)
{
    return sqrt(pow(p.x, 2) + pow(p.y, 2));
}