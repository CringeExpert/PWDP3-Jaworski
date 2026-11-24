#include <print>


//a -----------------
int suma( int tab[], int size)
    {   
        
        int suma = 0;

        for (int i = 0; i < size; i++)
            suma += tab[i];
        
        return suma;
        
    }

//b -----------------
void print(int tab[], int size)
{
        for(int i = 0; i < size; i++)
            std::print("{} ",tab[i]);
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
    int a_n = a0;

    for(int i = 0; i < size; i++)
    {
        tab[i] = a_n;
        a_n += r;
    }
}

int main()
{
    
    int a[5]={1,2,3,4,5};
    int b[5]={1,2,3,4,5};
    int c[5]={1,2,3,4,5};
    int d[5];

    //a
    std::print("\na)\n{}",suma(a, std::size(a)));

    //b
    std::println("\n\nb)");
    print(b,std::size(b));

    //c
    std::println("\n\nc)");
    inverse(c,std::size(c));
    print(c,std::size(c));

    //d
    std::println("\n\nd)\n");
    seq(d, std::size(d),0,10);
    print(d, std::size(d));

}