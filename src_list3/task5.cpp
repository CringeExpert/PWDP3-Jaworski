#include <iostream>

using std::cin;
using std::cout;

int main(){

    int c_1;
    cout << "Podaj c_1: ";
    cin >> c_1;

    for (int i = 0; i < 20; i++){
        if (c_1 % 2 == 0){
            c_1 /= 2;
        }
        else{
            c_1 = c_1 * 3 + 1;
        }
        cout << c_1 << "\n";
    }
}

