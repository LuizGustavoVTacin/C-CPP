#include <stdio.h>

int main(void){

//Caractere
    char Caractere = 'c';
    printf("%c\n",Caractere);
//Inteiro
    int Inteiro = 457;
    printf("%d\n",Inteiro);
//Notação Científica aceita apenas formato double
    double Notacao = 100000000; 
    printf("%e\n",Notacao);
//Float
    float Real = .23;
    printf("%f\n",Real);
//Octal
    int Octal = 23568;
    printf("%o\n",Octal);
//String
    char String[] = "Teste";
    printf("%s\n", String);
//Inteiro sem sinal
    int IntSSinal = -23;
    printf("%u\n", IntSSinal);
//Hexadecimal
    int Hexa = 23568;
    printf("%x\n",Hexa);
//AlinhaÀDireita
    int Direita = 23;
    printf("%5d\n",Direita);
//AlinharÀEsquerda
    int Esquerda = 23;
    printf("%-5d\n",Esquerda);
//2 Casas Decimais
    float Decimal = 23.56892;
    printf("%.2f\n", Decimal);
}