#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        mp[a]++;
    }
    // map<int, int> mp2;
    vector<int> v;
    // cout<<"K";
    auto itr = mp.begin();
    for (; itr != mp.end(); itr++)
    {
        v.push_back(itr->second);
    }
    vector<int> kamKa;
    int uniq =0;
    for(int i =0;i<v.size();i++){
        if(v[i]%k==0)kamKa.push_back(v[i]/k);
        else
        uniq++;
    }
    vector<int> preSum(v.size(), 0);
    sort(kamKa.begin(),kamKa.end());
    preSum[0] = kamKa[0]/k;
    for (int i = 1; i < kamKa.size(); i++)
    {
        preSum[i] = (preSum[i - 1] + kamKa[i]/k);
        // cout<<preSum[i]<<" ";
    }
    int ans[k*preSum[kamKa.size()-1]];
    int start = 0;
    for(int i=0;i<k*preSum[kamKa.size()-1];i++){
        
    }
    for (int i = 0; i < q; i++)
    {
        vector<int> temp = kamKa;
        // int qi ;cin>>qi;
        // int itr = qi;
        // int l = 0, r = preSum[v.size() - 1];
        // while (r >= l)
        // {
        //     int mid = l + (r - l) / 2;
        //     if (preSum[mid] < itr)
        //         l = mid+1;
        //     else
        //         r = mid - 1;
        // }
        // if (l < n)
        // {
        //     if (preSum[l] - itr)
        //     {
        //         // cout<<"k";
        //         cout << (v.size() - l) << endl;
        //     }
        //     else{
        //         // cout<<"b";
        //         cout << (v.size() - l-1) << endl;
        //     }
        // }
        // else
        //     cout << "0" << endl;
        int qi;
        cin>>qi;
        int start = 0;
        int ans = uniq + temp.size();
        // for(int i =0;i<temp.size();i++)cout<<temp[i]<<" ";
        for(int i=0;i<qi;i++){
            if(start==temp.size())break;
            temp[start]-=1;
            if(temp[start]==0){start++;ans--;}
        }
        cout<<ans<<endl;        
    }
}