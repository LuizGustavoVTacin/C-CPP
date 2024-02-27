#include <stdio.h>

int main(void){
    int Inteiro = 1, Negativo = -23;
    float Real = 0.4526, Fracao = 1.0/3;
    char Caractere = 'c', Simbolo = '$', Pontos = '!';
    double Precisao = 50.0/9;
    printf("O valores inteiros são: %d e %d\n", Inteiro, Negativo);
    printf("Os valores reais são: %f e %f\n", Real, Fracao);
    printf("Os caracteres são: %c, %c e %c\n", Caractere, Simbolo, Pontos);
    printf("Aumento de precisão %lf\n", Precisao);
    return 0;

    //Comentários são inseridos por // ou
    /* entre barra-estrela e estrela-barra*/
}