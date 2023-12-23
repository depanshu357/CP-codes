#include <bits/stdc++.h>
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
        int checkpoint = 0;
        map<int, int> mp;
        cin >> arr[0];
        for (int i = 1; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < arr[i - 1])
                checkpoint = i;
        }
        for (int i = 0; i < n; i++)
        {
            if (i >= checkpoint)
            {
                if (mp.find(arr[i]) != mp.end())
                {   
                    int test = checkpoint;
                    checkpoint = i;
                    mp[arr[i]]++;
                    if(mp[arr[i]]==mp[arr[i-1]]) {mp[arr[i]]--;checkpoint=test;}
                }else{
                    mp[arr[i]]=1;
                }
            }
            else if (mp.find(arr[i]) != mp.end())
            {
                mp[arr[i]]++;
            }
            else
            {
                mp[arr[i]] = 1;
            }
        }
        int sum = 0;
        // for (int i = checkpoint; i < n; i++)
        // {
        //     if (mp[arr[i]] > 1)
        //     {
        //     }
        // }
        // int sum=0;
        // cout << checkpoint << " " << mp[arr[checkpoint]] << " ";
        for (int i = 0; i < checkpoint; i++)
        {
            if (mp[arr[i]] > 0 || mp[arr[i]]==-1)
            {
                sum += 1;
                mp[arr[i]] = 0;
            }
        }
        cout << sum << endl;
    }
}