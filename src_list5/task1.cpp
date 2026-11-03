#include <print>

using namespace std;

//a -----------------
int suma( int tab[], int size)
    {   
        
        int suma = 0;

        for (int i = 0; i < size; i++)
            suma += tab[i];
            
        
        return suma;
        
    }

//b -----------------
void pprint(int tab[], int size)
{
        for(int i = 0; i < size; i++)
            print("{} ",tab[i]);
}

//c -----------------
void inverse(int tab[], int size)
{
    int tmp[size];

    for(int i = 0; i < size; i++)
        tmp[i] = tab[i];
    
    for(int i = 0; i < size; i++)
        tab[i] = tmp[size - i - 1];
    
}

//d -----------------
void seq(int tab[], int size, int a0, int r)
{
    int suma = a0;

    for(int i = 0; i < size; i++)
    {
        tab[i] = suma;
        suma += r;
    }
}

int main()
{
    
    int a[5]={1,2,3,4,5};
    int b[5]={1,2,3,4,5};
    int c[5]={1,2,3,4,5};
    int d[5];

    //a
    print("\na)\n{}",suma(a,size(a)));

    //b
    println("\n\nb)");
    pprint(b,size(b));

    //c
    println("\n\nc)");
    inverse(c,size(c));
    pprint(c,size(c));

    //d
    println("\n\nd)\n");
    seq(d, size(d),0,10);
    pprint(d, size(d));

}