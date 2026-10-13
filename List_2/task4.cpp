#include <iostream>
    using std::cout;
    using std::cin;
    using std::string;

int main(){
    cout << "\xC4\x84\x0a";
    //Polskie znaki wymagają dwóch bajtów pamięci, w związku z tym potrzebne są dwa (znaki?) \x.. \x..
    //\x0a to w pewnym sensie \n (nowa linia)
}
