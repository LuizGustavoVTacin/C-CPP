#include <iostream>
using std::cout;
using std::endl;
#include <cmath>

// Prototipo da funcao
int Potencia(int x, int y){
    return std::pow(x, y);
}

int main(){
    int x = 2, y = 3;
    cout << "2^3 = " << Potencia(x, y) << endl;
}
