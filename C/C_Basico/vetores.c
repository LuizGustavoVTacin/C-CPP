#include <stdio.h>

int main(){
    int vet[5], i;

    for(i=0; i<5; i++){
        printf("Digite um valor\n");
        scanf("%d",&vet[i]);
    }
    for(i=0; i < 5; i++){
        printf("%d ", vet[i]);
    }
}