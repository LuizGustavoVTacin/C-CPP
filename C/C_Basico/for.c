#include <stdio.h>

int main(){
    int resultado = 1;
    int numero;
    for(numero=6; numero>=1; numero--){
        resultado *= numero;
    }
    printf("O fatorial de 6 é %d\n\n", resultado);
}