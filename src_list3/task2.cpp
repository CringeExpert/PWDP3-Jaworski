#include <iostream>
#include <format>

using std::cin;
using std::cout;

int main(){

    double N = 100'000'000;
    double s = 0.0;

    for (int i = 0; i < N; i++){
        double x = i/N;
        s += x * x;
    }

    s /= N;
    cout << std::format("Wynik:\t{}\nLiczba N:\t{}\n",s,N);
    cout << s;
}

