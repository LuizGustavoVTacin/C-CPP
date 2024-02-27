#include <iostream>

int main(){

    using std::cout;
    using std::endl;
    using std::cin;
    int product = 3;
    while (product <= 100){
        product = 3 * product;
        cout << product << endl;}

    // Repetição por sentinela: quando -1 for digitado, o loop parará

    int total = 0, grade = 0;
    while(grade != -1){
        cin >> grade;
        total += grade;}
    total += 1;
    cout << total;
    return 0;
}

