#include <iostream>
using std::cout;
using std::endl;

int main(){
    int count;
    for (count = 1; count <= 10; count++){
        if (count == 5)
            break;
        cout << count << endl;
    }
    cout << "Saiu do loop em count = " << count << endl;
}