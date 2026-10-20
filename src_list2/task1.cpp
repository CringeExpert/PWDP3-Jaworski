#include <iostream>

int main(){
  std::cout << "Podaj imie: ";
  std::string imie;
  std::cin >> imie;

  std::cout << "Podaj nazwisko: ";
  std::string nazwisko;
  std::cin >> nazwisko;

  std::cout << "\nTwoje imie: " << imie << "\nTwoje nazwisko: " << nazwisko;
}