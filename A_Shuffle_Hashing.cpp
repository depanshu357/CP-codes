#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    map<char, int> mp;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        string h;
        cin >> h;
        int flag = 0;
        int count = s.size();
        int pre = 0;
        int warning=0;
        map<char, int> mp2 = mp;
        for (int i = 0; i < h.size(); i++)
        {   
            if (mp2.find(h[i]) == mp2.end())
            {
                pre = 0;
                mp2 = mp;
                count = s.size();
                continue;
            }
            else
            {    
                for(int j=i;j<h.size();j++){
                    
                if (pre == 0)
                {
                    pre = 1;
                    mp2[h[j]]--;
                    count--;
                }
                else if (pre == 1)
                {
                    mp2[h[j]]--;
                    count--;
                    pre = 1;
                }
                // cout<<mp2[h[j]]<<" ";
                if(mp2[h[j]]<0){
                    warning=1;
                    pre=0;
                    flag=0;
                    mp2=mp;
                    count=s.size();
                    continue;
                }
                if (count == 0)
                {
                    flag = 1;
                    break;
                }
                }
                if(flag==1) break;
            }
        }
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}