#include <print>
#include <algorithm>

using namespace std;

unsigned collatz(unsigned n)
{

    if (n % 2 == 0)
        n = n/2;
    else
        n = 3*n+1;
    
    return n;
}

int main()
{
    for (int n = 1; n <= 10; n++)
    {
        
        int counter = 1;
        int maxNumber = n;
        
        int i = n;
        while (i > 1)
        {
            counter += 1;
            
            maxNumber = max(i,maxNumber);

            i = collatz(i);
        }

        println("{:<6}{:^6}{:>6}", n, counter, maxNumber);
           
    }
}