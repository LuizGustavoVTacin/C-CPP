#include <stdio.h>

int main(){
    int numero = 1;

    if (numero <= 5){
        if(numero <= 3){
            if(numero == 1){
                printf("O numero é 1\n\n");
            }
        }
        else{
            if(numero == 2){
                printf("O numero é 2\n\n");
            }
            else{
                printf("O numero é 3\n\n");
            }
        }

    }
}