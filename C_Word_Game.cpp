#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map <string,int> mp;
        string s1[n], s2[n], s3[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s1[i];
            mp[s1[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> s2[i];
            mp[s2[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> s3[i];
            mp[s3[i]]++;
        }
        int count1 = 0, count2 = 0, count3 = 0;
        for (int j = 0; j < n; j++)
        {
            
            int flag1=0,flag2=0;
            if(mp[s1[j]]==3){count1+=0;}
            else if(mp[s1[j]]==2){count1+=1;}
            else count1+=3;
        }
        for (int j = 0; j < n; j++)
        {
            
            int flag1=0,flag2=0;
            if(mp[s2[j]]==3){count2+=0;}
            else if(mp[s2[j]]==2){count2+=1;}
            else count2+=3;
        }
        for (int j = 0; j < n; j++)
        {
            
            int flag1=0,flag2=0;
            if(mp[s3[j]]==3){count3+=0;}
            else if(mp[s3[j]]==2){count3+=1;}
            else count3+=3;
        }
        cout<<count1<<" "<<count2<<" "<<count3<<endl;
    }
}