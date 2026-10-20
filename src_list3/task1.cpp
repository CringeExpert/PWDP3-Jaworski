#include <iostream>

using std::cin;
using std::cout;

int main(){

    std::string og;
    cout << "Podaj napis: ";
    cin >> og;
    std::string result;

    for (int i = og.length()-1; i >= 0; i--){
        result += og[i];
    }

    cout << result;

}

