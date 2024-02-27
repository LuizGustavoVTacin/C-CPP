#include <iostream>
using std::cout;
using std::endl;

int main(){
    int a; // a é um inteiro
    int *aPtr; // aPtr é um ponteiro para um inteiro
    a = 7;
    aPtr = &a; // aPtr recebe o endereço de a

    cout << "O endereço de a é " << &a << "O valor de aPtr é " << aPtr << endl;
    cout << "O valor de a é " << a << "O valor de *aPtr é " << *aPtr << endl;
    cout << "Mostrando que * e & são inversos de um ao outro: &*aPtr = " << &*aPtr << " e *&aPtr = " << *&aPtr << endl;
    return 0;
}