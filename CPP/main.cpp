#include <iostream>
#include <fmt/format.h>

using std::cout;
using fmt::format;

int main(){

    std::string napis = "test";
    for (auto litera: napis){
        cout << format("{:X}",litera);
    }
}
