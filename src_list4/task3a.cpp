#include <cmath>
#include <fstream>
#include <format>
#include <vector>

using namespace std;

int main()
{
    const int length = 250;
    const int height = 250;
    const int max_color = 255;
    const double half_perimeter = length + height;
    const string filename = "../moj_obrazek_0.pgm";

    ofstream out(filename);

    vector<vector<vector<int>>> pixels;
    pixels.resize(height);
    for (int i = 0; i < pixels.size(); i++)
    {
        pixels[i].resize(length);
        for(int j = 0; j < pixels[i].size(); j++)
            pixels[i][j].resize(3);
    }
    

    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < length; x++)
        {
            double normalized_value = double(x + y) / half_perimeter;

            for (int z = 0; z < 3; z++)
                pixels[y][x][z] = abs(round(normalized_value * max_color)/(z+1)-max_color/2);
        }
    }

    out << format("P3\n{} {}\n{}\n", length, height, max_color);

    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < length; x++)
        {
            for (int z = 0; z < 3; z++)
                out << pixels[y][x][z] << " ";
        }
        out << "\n";
    }
}
