#include <fstream>
#include <iostream>
#include <format>
#include <vector>

using std::cout;
using std::string;

int main(){
    const int width = 800;
    const int height = 800;
    const int max_color = 1;

    string filename = "name.pgm";
    std::ofstream out(filename);

    std::vector<std::vector<int>> pixels;

    out << 
    "P2\n"
    "800 800\n"
    "1\n";

    pixels.resize(width);

    for (int i = 0; i < pixels.size(); i++){
        pixels[i].resize(height);
    }

    bool black = 1;

    for (int i = 0; i <= width; i++){

        if (i % 100 == 0)
                black = !black;
            
        for (int j = 0; j <= height; j++){
            
            pixels[i][j] = black;

            if (j % 100 == 0)
                black = !black;

            out << pixels[i][j] << " ";


        }

        out << "\n";
        
    }

    
}

