#include <bits/stdc++.h>
using namespace std;
int ctn(char c)
{
    if (c == 'I')
        return 1;
    if (c == 'V')
        return 5;
    if (c == 'X')
        return 10;
    if (c == 'L')
        return 50; 
    if (c == 'C')
        return 100;
    if (c == 'D')
        return 500;
    if (c == 'M')
        return 1000;
        return 0;
}
int main()
{
    string s;
    cin >> s; 
    int sum =0;
    for(int i=0;i<s.size()-1;i++){
        if(ctn(s[i])<ctn(s[i+1])) sum-=ctn(s[i]);
        else sum+=ctn(s[i]);
    }
    sum+=ctn(s[s.size()-1]);
    cout<<sum;
    return 0;
}