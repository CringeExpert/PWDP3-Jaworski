#include <print>

using namespace std;

unsigned collatz(unsigned n)
{

    if (n % 2 == 0)
        n = n/2;
    else
        n = 3*n+1;
    
    return n;
}

unsigned collatz_properties[2];
void collatz_properties(unsigned n){

    unsigned tmp = collatz(n);
    int counter = 0;
    int max = 0;

    tmp = collatz(n);
    while (tmp = (collatz(tmp) > 0))
    {
        counter += 1;

        if (max < tmp)
            max = tmp;
        
    }

    collatz_properties[0] = counter;
    collatz_properties[1] = max;
}

int main()
{
    for (int n = 1; n < 10; n++)
    {
        println("{}{^5}{}", n, collatz_properties[0], collatz_properties[1]);

        if ()
    }
}