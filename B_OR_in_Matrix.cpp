#include <iostream>
#include <vector>
using namespace std;
int a[100][100] = {0};
int main()
{
    int m, n;
    cin >> m >> n;
    int checkx[m];
    int checky[n];
    int arr[m][n];
    int flag2 = 0;
    int count1arr = 0;
    int count1a = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
                count1arr++;
        }
    }
    int flag = 0;
    for (int i = 0; i < m; i++)
    {
        int count = 0;
        if (arr[i][0] == 1)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] == 1)
                {
                    count++;
                }
            }
        }
        if (count == n)
        {
            checkx[i] = 1;
        }
        else
        {
            checkx[i] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        if (arr[0][i] == 1)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[j][i] == 1)
                {
                    count++;
                }
            }
        }
        if (count == m)
        {
            checky[i] = 1;
        }
        else
        {
            checky[i] = 0;
        }
    }
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (checkx[j] == 1 && checky[i] == 1)
            {
                v.push_back({j, i});
                a[j][i] = 1;
                count1a++;
            }
        }
    }
    int copycat[m][n]={0};
    
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (arr[i][j] != 1 && a[i][j] == 1)
    //         {
    //             flag2 = 1;
    //             break;
    //         }
    //     }
    //     if (flag2 == 1)
    //         break;
    // }
    // if (count1a > count1arr || (count1a == 0 && count1arr >= 1))
    //     flag2 = 1;
    if (flag2 == 1)
        cout << "NO";
    else
    {
        cout << "YES" << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}