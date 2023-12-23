#include <iostream>
#include <map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        multimap<int, int> mp;
        int min = 1e9 + 7;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (min > arr[i])
                min = arr[i];
        }
        int maxpos;
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            arr[i] -= min;
            mp.insert({arr[i], i});
        }
        auto it = mp.rbegin();
        int pos = it->second;
        int lpos, rpos;
        lpos = pos - 1;
        rpos = pos + 1;
        it++;
        int flag = 1;
        for (; it != mp.rend(); it++)
        {
            if (!(it->second == lpos || it->second == rpos))
            {
                flag = 0;
                break;
            }
            else if (it->second == lpos)
            {
                if (lpos > 0)
                    lpos = lpos - 1;
            }
            else
            {
                if (rpos < n - 1)
                    rpos = rpos + 1;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}