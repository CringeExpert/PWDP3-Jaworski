#include <cmath>
#include <fstream>
#include <format>
#include <vector>

using namespace std;

int main()
{
    const string filename = "../img.pgm";

    ifstream in(filename); 

    int lines = 0;
    int words = 0;
    int chars = 0;
    string line;
    string word;
    char character;
    
    while(getline(in,line)){
        lines += 1;
        stringstream ss(line);
        
        while(getline(ss,word)){}

    }

}
