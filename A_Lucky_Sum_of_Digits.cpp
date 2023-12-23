#include <bits/stdc++.h>
using namespace std;
void print(int i,int j){
    // cout<<j<<" "<<i<<endl;
    for(int k=0;k<j;k++){
        cout<<"4";
    }
    for(int k=0;k<i;k++){
        cout<<"7";
    }
}
int main()
{
    int n;
    int x, y;
    cin >> n;
    x = n / 7;
    y = 0;
    int flag = 0;
    for(int i = x; i >= 0; i--)
    {
    int j = (n-i*7)/4;
            if (i * 7 + 4 * j == n)
            {
                print(i,j);
                flag = 1;
                break;
            }
        
        if(flag==1)break;
    }
    if (flag == 0)
        cout << "-1";
}