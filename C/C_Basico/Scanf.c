#include <stdio.h>

int main(void){
    int i;
    char c;
    printf("Digite um número inteiro e um caracter:\n");
    scanf("%d", &i);
    getchar();
    scanf("%c", &c);
    printf("Digitados: %d, %c\n", i, c);
}