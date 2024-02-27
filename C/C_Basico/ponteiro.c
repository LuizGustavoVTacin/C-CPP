#include <stdio.h>

int main(){
    int i = 1, *p, *q, a;
    p = &i;
    q = p;
    a = i;
    printf("i = %d e *p = %d\n",i, *p);
    printf("a = %p e p = %p\n\n\n", &a, p);
    printf("q = %p e *q = %d\n\n", q, *q);
    *q = 11;
    printf("*q = %d, *p = %d, i = %d\n\n", *p, *q, i);
    (*p)++;
    printf("*q = %d, *p = %d, i = %d\n\n", *p, *q, i);
    int Mat[2], *pont;
    Mat[0] = 1; Mat[1] = 2;
    pont = Mat;
    printf("%d\n\n", *(pont++)); //Avança o endereço de memoria e incrementa a memoria
                                 //Como int ocupa 4 byts, exibirá o proprio valor
    printf("%d\n\n", (*pont)++); //Soma 1 ao valor da memoria
    int **pont2;
    pont2 = &pont;
    printf("%p, %p e %d\n\n", pont2, *pont2, **pont2); 
    //O primeiro mostra o endereço de pont2, o segundo mostra o end de pont
    //O terceiro mostra o valor na memória de pont
}