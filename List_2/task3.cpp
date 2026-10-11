#include <iostream>
    using std::cout;
    using std::cin;
    using std::string;

int main(){
    cout << "\e[4;33;47munderlined text\e[0m\n";
    // \e     to znak ESC (dosłownie ten co jest na klawiaturze)
    // [4       cyfra cztery to "opcja", w tym przypadku podkreślenie, 
    // 32;48m   wartości od 30 to kolory czcionki, wartości od 40 to kolory tła

    cout << "\e[32mSzymon \e[31mJaworski\e[0m";
}