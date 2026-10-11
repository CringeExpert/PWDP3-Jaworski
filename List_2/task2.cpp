#include <iostream>

int main(){
    std::cout << "\nAla:\t" << sizeof("Ala");
    std::cout << "\n123\t" << sizeof("123");
    std::cout << "\n1234\t" << sizeof("1234");
    std::cout << "\n12345\t" << sizeof("12345");
    // Jeden znak zabiera jeden bajt (+ 1 bajt)

    std::cout << "\ną:\t" << sizeof("ą");
    std::cout << "\nąą:\t" << sizeof("ąą");
    std::cout << "\nąąą:\t" << sizeof("ąąą");
    std::cout << "\nąąą...:\t" << sizeof("ąąąąąąąąąąąąąąąąąąąąąąąąąąąąąąąąą");
    // Jeden znak zabiera dwa bajty (+ 1 bajt)
    
    std::string s1("1");
    std::string s2("żółty");
    std::string s3("żółtyżółtyżółtyżółtyżółtyżółtyżółtyżółtyżółty");

    std::cout << "\nzmienna s1: " << s1 << "\t" << sizeof(s1);
    std::cout << "\nzmienna s2: " << s2 << "\t" << sizeof(s2);
    std::cout << "\nzmienna s3: " << s3 << "\t" << sizeof(s3);

    //Każda zmienna string podstawowo zabiera 32 bajty pamięci
    //Wydedukuj na podstawie uzyskanego wyniku, czy te napisy przechowywane są w pamięci zarządzanej przez kompilator (tylko taka pamięć raportowana jest przez sizeof).
    //Tak, ewidentnie
}