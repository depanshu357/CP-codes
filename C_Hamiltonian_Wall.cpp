#include <bits/stdc++.h>
using namespace std;
/// @brief
void solve()
{
    int n;
    cin >> n;
    char s1[n], s2[n];
    int flag1 = 0, flag2 = 0, flag3 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> s2[i];
        if (!(s1[i] == 'B' || s2[i] == 'B'))
        {
            flag1 = 1;
        }
    }
    if (flag1)
    {
        cout << "NO" << endl;
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (s1[i] == 'B' && s2[i] == 'B')
        {
            if (i)
            {
                if (s1[i - 1] == 'W' && s1[i + 1] == 'W')
                {
                    flag3 = 1;
                }
                if (s2[i - 1] == 'W' && s2[i + 1] == 'W')
                {
                    flag3 = 1;
                }
                if (flag3)
                    break;
            }
            continue;
        }
        else if (s1[i] == 'B')
        {
            if (s1[i + 1] == 'W')
            {
                flag2 = 1;
                break;
            }
        }
        else if (s2[i] == 'B')
        {
            if (s2[i + 1] == 'W')
            {
                flag2 = 1;
                break;
            }
        }
    }
    if (flag3)
    {
        cout << "NO" << endl;
        return;
    }

    // int posi = 0, posj = 0;
    // int preposi = 0, preposj = 0;
    int flag4 = 0;
    // int test = 0;
    // while (s1[test] == 'B' && s2[test] == 'B')
    // {
    //     test++;
    // }
    // if (s1[test] == 'B' && s2[test] == 'B')
    // {
    //     if (s1[test + 1] == 'W')
    //     {
    //         posi = 2;
    //         posj = test;
    //         preposi = 1, posj = test;
    //     }
    //     else
    //     {
    //         posi = 1;
    //         preposi = 2;
    //         preposj = test;
    //         posj = test;
    //     }
    // }
    // while(1){
    //         if(posj==n-1)break;
    //     if(posi==1){
    //         if(s2[posj]=='B' && preposi!=2){
    //             preposi=posi;
    //             preposj=posj;
    //             posi=2;
    //         }else{
    //             if(s1[posj+1]=='W'){
    //                 flag4=1;
    //                 break;
    //             }
    //             preposj=posj;
    //             posj=posj+1;
    //         }
    //     }else{
    //         if(s1[posj]=='B' && preposi!=1 ){
    //             preposi=posi;
    //             preposj=posj;
    //             posi=1;
    //         }else{
    //             if(s2[posj+1]=='W'){
    //                 flag4=1;
    //                 break;
    //             }
    //             preposj=posj;
    //             posj=posj+1;
    //         }
    //     }
    // }
    int case1 = 0, case2 = 0, count_con = 0;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == 'B' && s2[i] == 'W')
        {
            if (case1)
            {
                if (count_con % 2)
                {
                    flag4 = 1;
                    break;
                }
                case1 = 0;
                count_con = 0;
            }
            else if (case2)
            {
                if (!(count_con % 2))
                {
                    flag4 = 1;
                    break;
                }
                case2 = 0;
                count_con = 0;
            }
            else
                case1 = 1;
        }
        else if (s1[i] == 'W' && s2[i] == 'B')
        {
            if (case2)
            {
                if (count_con % 2)
                {
                    flag4 = 1;
                    break;
                }
                case2 = 0;
                count_con = 0;
            }
            else if (case1)
            {
                if (!(count_con % 2))
                {
                    flag4 = 1;
                    break;
                }
                case2 = 0;
                count_con = 0;
            }
            else
            {
                case2 = 1;
            }
        }
        else
        {
            if (case1 || case2)
                count_con++;
        }
    }

    // if(n<=3)flag4=0;
    // cout<<flag1<<" "<<flag2<<" "<<flag3<<" "<<flag4<<" ";
    if (flag2)
    {
        cout << "NO" << endl;
        return;
    }
    if (flag4)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}