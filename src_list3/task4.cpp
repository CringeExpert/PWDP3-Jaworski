#include <iostream>
#include <format>

using std::cin;
using std::cout;

int main(){

    for (int i = 1; i <= 10; i++){

        for (int j = 1; j <= 10; j++){
            cout << std::format("{:4}",i*j);
        }
        cout << "\n";
    }

}

