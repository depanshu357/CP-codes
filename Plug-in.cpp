#include <iostream>
#include <string>
using namespace std;
void solve(string in, int len)
{
    for (int i = 0; i < len; i++)
    {
        int k = 0;
        if(in[i]=='0') continue;
        else if (in[i] == in[i + 1] && in[i] != '0')
        {
            in[i] = '0';
            in[i + 1] = '0';
           if(i>0){i--;i--;}
        }
        else if (in[i + 1] == '0')
        {
            while (in[i + k + 1] == '0')
            {
                k++;
            }
            if (in[i + k + 1] == in[i])
            {
                in[i] = '0';
                in[i + k + 1] = '0';
                if(i>0){i--;i--;}
            }
        }
    }
    int k=0;
        if (in[  1] == '0')
        {
            while (in[ k + 1] == '0')
            {
                k++;
            }
            if (in[k + 1] == in[0])
            {
                in[0] = '0';
                in[ k + 1] = '0';
                
            }
        }

    for (int i = 0; i < len; i++)
    {
        if (in[i] != '0')
            cout << in[i];
    }
}
int main()
{
    string in;
    cin >> in;
    int len;
    len = in.size();
    solve(in, len);
    return 0;
}