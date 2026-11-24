#include <iostream>
#include <vector>
#include <print>
#include <cmath>
#include <set>

std::set<int> perfect_powers(int n)
{
    std::set<int> pp;

    for (int i = 2; i*i <= n; i++) //i^2 to najmniejsza możliwa potęga, jeśli ona będzie większa niż n, to wszystko będzie
    {
        long long val = i*i; //long long aby przeciwdziałać przepełnieniu (zrozum)

        while (val <= n)
        {
            pp.insert(val);

            val *= i;
        }
    }

    return pp;
}

long double special_sum(std::set<int>& perf_pow)
{
    long double sum = 0;

    for (auto i : perf_pow)
        sum += 1.0L / (i - 1);

    return sum;
}

int main()
{
    auto set = perfect_powers(10);
    for (auto i : set)
    {
        std::println("{}",i);
    }

    std::println("{}",special_sum(set));

    for (int n = 10; n <= 10'000'000; n *= 10)
    {
        auto perf_pow = perfect_powers(n);

        auto sum = special_sum(perf_pow);
    
        std::cout << n << "\t" << sum << "\t" << 1.0 - sum << "\n";
    }
}