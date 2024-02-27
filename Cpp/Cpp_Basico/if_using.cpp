#include <iostream>

int main(){
    using std::cout;
    using std::cin;
    using std::endl;

    int number1;
    int number2;

    cout << "Enter two integers to compare ";
    cin >> number1 >> number2;
    cout << "Numero 1 is " << number1 << endl;
    cout << "Numero 2 is " << number2 << endl;

    if (number1 == number2)
        cout << number1 << " == " << number2 << endl;
    if (number1 < number2)
        cout << number1 << " < " << number2 << endl;
    else
        cout << number1 << " > " << number2 << endl;

    return 0;
}
