#include <fstream>
#include <iostream>
#include <format>
#include <stdexcept>

using namespace std;

int main(){
    string fileNameIn = "../1.pgm";
    string fileNameOut = "../asciiArt";
    std::ifstream in(fileNameIn);
    std::ofstream out(fileNameOut);

    if (!in)
        throw std::runtime_error(std::format("Failed to open {}",fileNameIn));

    string header;

    in >> header;
    if (header != "P2")
        throw std::runtime_error("File type is wrong");
    
    int width;
    int height;
    int len1;
    int tmp;

    in >> width;
    in >> height;
    in >> len1;

    char ascii[] = ".'`^,:;Il!i><~+_-?][}{1)(|/tfjrxnuvczXYUJCLQ0OZmwqpdbkhao*#MW&8%B@$";

    const int len2 = sizeof(ascii) - 1;

    for(int i = 0; i < width; i++){

        for(int j = 0; j < height; j++){
            in >> tmp;
            tmp = tmp * len2 / (len1 + 1); 
            out << ascii[tmp] << "";
        }
        
        out << endl;

    }

}