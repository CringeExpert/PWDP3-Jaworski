#include <iostream>
#include <fmt/format.h>

using std::cin;
using std::cout;

int main(){

    std::string og;
    cout << "Podaj napis: ";
    cin >> og;
    std::string result;

    for (int i = og.size(); i >= 0; i--){
        result += og[i];
    }

    cout << result;

}

