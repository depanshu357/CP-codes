#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n, k;
    multimap<int, int> mp;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        mp.insert(pair<int, int>(a, i + 1));
    }
    int sum = 0;
    int count=0;
    auto it=mp.begin();
    for ( ; it != mp.end(); it++)
    {
        sum += it->first;
        count++;
        if (sum > k)
        {
            sum -= it->first;
            count--;
            break;
        }
    }
    cout << count << endl;
    for (auto it1 = mp.begin(); it1!= it; it1++)
    {
        cout << it1->second << " ";
    }
}