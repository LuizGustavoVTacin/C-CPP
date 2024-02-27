#include <iostream>
using std::cout;
using std::endl;
using std::fixed; // Para que o número apareça com decimais

#include <iomanip> // Para usar setprecision
using std::setprecision;
using std::setw;

#include <cmath> // Para usar funções matemáticas
using std::pow;

int main()
{
    double amount; // Quantia em depósito ao fim de cada ano
    double principal = 1000.0; // Quantia inicial antes dos juros
    double rate = .05; // Taxa de juros

    // Exibe cabeçalhos
    cout << "Ano" << setw(30) << "Quantia em depósito" << endl;

    // Configura o formato de saída de ponto flutuante
    cout << fixed << setprecision(2);

    // Calcula a quantia de depósito para cada um dos dez anos
    for (int year = 1; year <= 10; ++year)
    {
        // Calcula a nova quantia para o ano especificado
        amount = principal * pow(1.0 + rate, year);

        // Exibe o ano e a quantia
        cout << setw(4) << year << setw(21) << amount << endl;
    }
    return 0;
}