#include <stdio.h>
#include <string.h>

int main(){
    char vetor_1[30];
    char vetor_2[] = "Luiz Gustavo";

    printf("Digite seu nome:\n");
    fgets(vetor_1, sizeof(vetor_1), stdin);
    printf("Com gets: %s.\n", vetor_1);

    printf("%zu\n\n", strlen(vetor_2));
    char vetor_3[60];
    strcpy(vetor_3, vetor_1);
    strcat(vetor_3, vetor_2);
    printf("%s\n\n", vetor_3);
}