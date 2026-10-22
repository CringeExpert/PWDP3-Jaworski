#include <fstream>
#include <iostream>
#include <format>
#include <vector>

using std::cout;
using std::string;

int main(){
    const int width = 800;
    const int height = 800;
    const int max_color = 255;
    const int block_size = 100;
    const int color1 = 50;
    const int color2 = 200;

    string filename = "../img.pgm";
    std::ofstream out(filename);

    std::vector<std::vector<int>> pixels;

    out << std::format("P2\n{} {}\n{}\n",width,height,max_color);

    pixels.resize(width);

    for (int i = 0; i < pixels.size(); i++){
        pixels[i].resize(height);
    }

    for (int i = 0; i < height; i++){
            
        for (int j = 0; j < width; j++){
            
            if ((1 - (i/block_size + j/block_size)) % 2 == 0)
                pixels[i][j] = color1;

            else
                pixels[i][j] = color2;

            out << pixels[i][j] << " ";


        }

        out << "\n";
        
    }

    
}

