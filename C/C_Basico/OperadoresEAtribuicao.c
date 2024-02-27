#include <stdio.h>

int main(void){
   int x = 23, y = 5;
//Soma:
    x += y;
    printf("%d\n", x);
//Subtração
    x -= y;
    printf("%d\n", x);
//Multiplicação
    x *= y;
    printf("%d\n", x);
//Divisão
    float z = 23.0;
    z /= y;
    printf("%f\n", z);
//Resto
    x %= y;
    printf("%d\n",x);
//Incremento Unitário
    y++;
    printf("%d\n",y);
//Decremento Unitário
    int w = 23;
    w--;
    printf("%d\n",w);
}

