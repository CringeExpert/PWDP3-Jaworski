#include <iostream>
#include <fmt/format.h>

using std::cin;
using std::cout;

int main(){

    double N = 100000000;
    double s = 0.0;

    for (int i = 0; i < N; i++){
        double x = i/N;
        s += x * x;
    }

    s /= N;
    cout << fmt::format("Wynik:\t{}\nLiczba N:\t{}\n",s,N);
    cout << s;
}

