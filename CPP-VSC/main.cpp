
#include <format>
#include <iostream>

int main()
{
    double num = 3.14159;
    std::string name = "John";
    std::cout << std::format("{:x}", 'c') << std::endl;

    return 0;

}