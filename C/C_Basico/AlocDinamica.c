#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    p = (int *)malloc(sizeof(int)); 
    // Ponteiro void pode ser alocado em qualquer tipo
    // Nesse caso, foi alocado para int 
    *p = 10;
    //Outro exemplo
    float *q;
    int i, n = 3;
    q = (float *)malloc(sizeof(float)*n);
    for(i = 0; i < n; i++){
        *(q + i) = 1;
    }
    //Calloc
    int *r;
    r = (int *)calloc(10, sizeof(int));
    // p[0] a p[9] terão valor 0
    //Free
    int *s;
    s = (int *)malloc(sizeof(int));
    free(s);
    float *t;
    t = (float *)calloc(100, sizeof(float));
    free(t);
    // Alocação de Matrizes
    int **u;
    int m = 2; 
    int nn = 2;
    u = (int **)malloc(sizeof(int *) * m);
    for(int i = 0; i < m; i++){
        u[i] = (int *)malloc(sizeof(int) * nn);
    }
    u[0][1] = 3;
    for(int i = 0; i < m; i++){
        free(u[i]);
    }
    free(u);
}