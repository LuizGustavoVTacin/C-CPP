#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){

    char Nota;
    cout << "Qual é a nota ? ";
    cin >> Nota;

    switch (Nota)
    {
    case 'A': //Primeira Condicao
    case 'a':
        cout << "Gabaritou" << endl;
        break;
    case 'C': //Segunda Condicao
    case 'c':
        cout << "Na média" << endl;
        break;
    default: //Caso nenhuma das condicoes seja verdadeira
        break;
    }
}