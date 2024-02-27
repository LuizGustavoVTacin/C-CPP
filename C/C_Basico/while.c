#include <stdio.h>

int main(){
    int numero;
    printf("Digite um numero\n");
    scanf("%d", &numero);
    int resultado = 1;
    while (numero >= 1){
        resultado *= numero;
        numero -= 1;
    }
    printf("O fatorial é %d\n\n", resultado);
}