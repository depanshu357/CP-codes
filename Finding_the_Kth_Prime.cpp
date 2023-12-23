#include <bits/stdc++.h>
using namespace std;
bool is_prime[87000000];
std::vector <int> primes;
// vector <int,int>primes;
// stack <int,int> primes;
void sieve()
{
    int maxN = 87000000;
    for (int i = 0; i < maxN; i++)
        is_prime[i] = true;
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < maxN; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= maxN; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    for(int i=2;i<maxN;i++){
        if(is_prime[i]) primes.push_back(i);
    }
}
int main()
{
    int t;
    cin >> t;
    sieve();
    while (t--)
    {
        int n;
        cin >> n;
        cout<<primes[n-1]<<endl;
    }
}