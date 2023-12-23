#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        int flag1 = 0, flag2 = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < m; j++)
            {
                arr[i][j] = s[j];
                if (s[j] == '0')
                    flag1 = 1;
                else
                    count++;
            }
            // cout<<endl;
        }
        for (int i = 0; i < n - 1; i++)
        {
            {

                for (int j = 0; j < m - 1; j++)
                {
                    if (arr[i][j] == arr[i][j + 1] && arr[i][j] == '0')
                    {
                        flag2 = 1;
                        break;
                    }
                    else if (arr[i][j] == arr[i + 1][j] && arr[i][j] == '0')
                    {
                        flag2 = 1;
                        break;
                    }
                }
            }
            
        }
        //  cout<<count<<" ";
        if (count == 0)
            cout << count << endl;
        else if(flag1==1 && flag2==0 ){
            cout<<count<<endl;
        }
        else if (flag2 == 1)
        {
            cout << count << endl;
        }
        else if (flag1 == 1)
        {
            cout << count - 1 << endl;
        }
        else
            cout << count - 2 << endl;
    }
}