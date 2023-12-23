#include <bits/stdc++.h>
using namespace std;
int is_prime[int(1e6) + 1];
int main()
{
    int maxN = 1e6;
    for (int i = 0; i < maxN; i++)
        is_prime[i] = 1;
    is_prime[0] = is_prime[1] = 0;

    for (int i = 2; i * i <= maxN; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= maxN; j += i)
            {
                is_prime[i] = 0;
            }
        }
    }
}