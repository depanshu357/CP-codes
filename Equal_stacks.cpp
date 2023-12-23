#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> a, b, c;
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int a_hei = 0, b_hei = 0, c_hei = 0;
    for (int i = 0; i < n1; i++)
    {
        int hei;
        cin >> hei;
        a.push(hei);
        a_hei += hei;
    }
    for (int i = 0; i < n2; i++)
    {
        int hei;
        cin >> hei;
        b.push(hei);
        b_hei += hei;
    }
    // cout<<b_hei<<endl;
    for (int i = 0; i < n3; i++)
    {
        int hei;
        cin >> hei;
        c.push(hei);
        c_hei += hei;
    }
    int max_hei = max(a_hei, b_hei);
    max_hei = max(max_hei,c_hei);
    while (true)
    {
        if (!(max_hei == a_hei && a_hei == b_hei && b_hei == c_hei))
        {
            // cout<<a_hei<<" "<<b_hei<<" "<<c_hei<<endl;
            if (max_hei == a_hei)
            {
                a_hei-=a.front();
                a.pop();
            }
            if (max_hei == b_hei)
            {   
                b_hei-=b.front();
                b.pop();
            }
            if (max_hei == c_hei)
            {   
                c_hei-=c.front();
                c.pop();
            }
            max_hei = max(a_hei, b_hei);
            max_hei = max(max_hei,c_hei);
        }
        else
        {
            // cout<<a_hei<<" "<<b_hei<<" "<<c_hei<<endl;
            cout << max_hei;
            break;
        }
    }
}