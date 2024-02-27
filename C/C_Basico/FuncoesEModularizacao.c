#include <stdio.h>

int soma(float x, float y){
    float sum;
    float i;
    sum = x + y;
    return sum;
}
int fat (int *p){
    int sum = 1;
    while (*p > 0){
        sum *= *p;
        (*p)--;
    }
    return sum;
}
int soma2 (int vet[], int tam){
    int i, sum2 = 0;
    for (i = 0; i < tam; i++){
        sum2 += vet[i];
    }
    return sum2;
}
int soma3 (int a){
    if (a == 0) return 1;
    else return (a *= soma3(a-1));
}
int main(){
    int a = 2, b = 3, i, j, k, w;
    i = soma(a,b);
    int f = 4;
    j = fat(&f);
    int vet[10] = {0,1,2,3,4,5,6,7,8,9};
    k = soma2(vet,10);
    int rec = 7;
    w = soma3(rec);
    printf("A soma é %d\n\n", i);
    printf("O fatorial é %d\n\n",j);
    printf("A soma dos elementos do vetor é %d\n\n", k);
    printf("O fatorial recursivo é %d\n\n", w);
}