#include <stdio.h>
#include <string.h>

struct estrutura {
    char nome[30];
    int idade;
};
struct Pagamento{
    float salario;
};
typedef struct Pagamento Pagamento_t;

int main() {
    struct estrutura pessoa;
    Pagamento_t funcionarios[500];

    strcpy(pessoa.nome, "Luiz");
    pessoa.idade = 23;
    printf("O nome é: %s\n", pessoa.nome);
    printf("A idade é: %d\n", pessoa.idade);

    funcionarios[0].salario = 1500;
    funcionarios[1].salario = 2378;
    printf("Salario do funcionario é %.0f\n", funcionarios[0].salario);
    return 0;
}
