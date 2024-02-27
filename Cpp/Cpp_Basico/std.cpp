#include <iostream>

int main(){
    int number1;
    int number2;
    int sum;
    char vetor[10];

    std::cout << "Enter first integer ";
    std::cin >> number1;
    std::cout << "Enter second integer ";
    std::cin >> number2;
    std::cout << "Enter vetor ";
    std::cin >> vetor;
    sum = number1 + number2;
    std::cout << "Vetor is " << vetor << std::endl;
    std::cout << "Sum is " << sum << std::endl;

    return 0;
}