#include <fstream>
#include <iostream>
#include <format>
#include <stdexcept>

using namespace std;

int main(){
    string fileNameIn = "../img.pgm";
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

    char ascii[] = " ..,:;!=oxO#%@";

    const int len2 = size(ascii) - 2;

    for(int i = 0; i < width; i++){

        for(int j = 0; j < height; j++){
            in >> tmp;
            tmp = (tmp*(len2))/(len1); 
            out << ascii[tmp] << "";
        }
        
        out << '\n';
        
    }

}