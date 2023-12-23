#include <bits/stdc++.h>
using namespace std;
int vst[100001];
vector<int> arr[100001];
int dist[100001];
int sieve_prime[100001];
void sieve()
{
    sieve_prime[0] = sieve_prime[1] = 1;
    for (int i = 2; i * i <= 100000; i++)
    {
        for (int j = i * i; j <= 100000; j += i)
        {
            sieve_prime[j] = 1;
        }
    }
}
void CreateAdjacencyList()
{
    for (int i = 1; i < 10000; i++)
    {
        int n = i;
        if(sieve_prime[n]==1)continue;
        int flag1 = 0;
        for (int j = 0; j <= 9; j++)
        {
            // cout<<"kuch toh hua ";
            if (sieve_prime[(n / 10) * 10 + j] == 0 && i != ((n / 10) * 10 + j))
            {
                int flag = 1;
                for (int child : arr[n])
                {
                    if ((n / 10) * 10 + j != child)
                    {
                        arr[n].push_back((n / 10) * 10 + j);
                        cout<<((n / 10) * 10 + j);
                    }
                }
            }
            else if (sieve_prime[(n / 100) * 100 + (n % 10) + j * 10] == 0 && i != ((n / 100) * 100 + (n % 10) + j * 10))
            {
                int flag = 1;
                for (int child : arr[n])
                {
                    if ((n / 100) * 100 + (n % 10) + j * 10 != child)
                    {
                        arr[n].push_back((n / 100) * 100 + (n % 10) + j * 10);
                    }
                }
            }
            else if (sieve_prime[(n / 1000) * 1000 + (n % 100) + j * 100] == 0 && i != ((n / 1000) * 1000 + (n % 100) + j * 100))
            {
                int flag = 1;
                for (int child : arr[n])
                {
                    if ((n / 1000) * 1000 + (n % 100) + j * 100 != child)
                    {
                        arr[n].push_back((n / 1000) * 1000 + (n % 100) + j * 100);
                    }
                }
            }
            else if (sieve_prime[(n % 1000) + j * 1000] == 0 && i != (n % 1000) + j * 1000)
            {
                for (int child : arr[n])
                {
                    if ((n % 1000) + j * 1000 != child)
                    {
                        arr[n].push_back((n % 1000) + j * 1000);
                    }
                }
            }
        }
    }
}

int BFS(int a, int b)
{
    dist[a] = 0;
    queue<int> q;
    q.push(a);
    vst[a] = 1;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int nibh : arr[v])
        {
            if (dist[nibh] == 0)
            {
                dist[nibh] = dist[v] + 1;
                cout<<nibh<<" "<<dist[nibh];
                q.push(nibh);
            }
        }
    }
    
    return dist[b];
}
int main()
{
    int a, b;
    cin>>a>>b;
    sieve();
    CreateAdjacencyList();
    // int path_length = BFS(a, b);
    // cout << path_length;
    for(int i=10000;i<=79999;i++){
            cout<<arr[i].size()<<" ";
        // cout<<endl;
    }
}