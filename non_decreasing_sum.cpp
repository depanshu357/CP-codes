#include <iostream>
#include <string>
using namespace std;
int arr[100] = {0};
void order(int n, string s)
{
    if (n == 0)
    {
        cout << s << endl;
        return;
    }
    else if (n == 1)
    {
        s = s + '1';
        cout << s << endl;
        return;
    }
    // cout<<s<<endl;
    string h = s + '1';
    order(n - 1, h);
    string v = s + '2';
    order(n - 2, v);
}
void order2(int n, string s)
{
    if (n == 0)
    {
        cout << s << endl;
        return;
    }
    else if (n <= 0)
    {
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        string h = s + (char)i + '0';
        order2(n - i, h);
    }
}
void order3(int n, int pre, int index)
{   
    // for printing non decreasing sequence
    if (n == 0)
    {
        for (int i = 0; (i < index); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }
    if(n<0) return ;
    for (int i = 1; i <= n; i++)
    {
        if (i <= pre && n-i>=0)
        {
            arr[index] = i;
            order3(n - i, i, index + 1);
        }
    }
}
void order4(int n, int pre, int index)
{// for printing strictly incresing sequence
    if (n == 0)
    {
        for (int i = index-1; (i >=0); i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }
    if(n<0) return ;
    for (int i = 1; i <= n; i++)
    {
        if (i < pre && n-i>=0)
        {
            arr[index] = i;
            order4(n - i, i, index + 1);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    // for(int i=0;i<10;i++){
    //     cout<<arr[i]<<" ";
    // }
    // string s;
    order4(n, n+1, 0);
}