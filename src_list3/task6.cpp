#include <iostream>
#include <fmt/format.h>

using std::cin;
using std::cout;
using std::string;

int main(){
    string text;
    cout << "Podaj tekst: ";
    cin >> text;

    for (int i = 0; i < text.length(); i++){
        if (i % 2 == 0){
            cout << "\e[1;31m" << text[i];
        }
        else{
            cout << "\e[1;32m" << text[i];
        }
    }

    cout << "\e[0m\n";
}

