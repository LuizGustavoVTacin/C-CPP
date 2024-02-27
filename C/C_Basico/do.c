#include <stdio.h>

int main(){
    int numero = 10;
    printf("Iniciando contagem\n\n");
    do{
        printf("%d\n\n", numero);
        numero--;
    }
    while (numero >= 0);
    printf("Contagem finalizada\n\n");
}