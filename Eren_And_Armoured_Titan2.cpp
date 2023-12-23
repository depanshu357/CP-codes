#include <iostream>
#include <vector>
using namespace std;
void solve(int hp, vector<int> dmg, vector<int> timstp, int s, int e, int n)
{
    int mid = (s + e) / 2;
    if (dmg[mid] >= hp && mid > 0 && dmg[mid - 1] < hp)
    {
        cout << timstp[mid] << " ";
        return;
    }
    else if (mid < n - 1 && dmg[mid] < hp && dmg[mid + 1] >= hp)
    {
        cout << timstp[mid + 1] << " ";
        return;
    }
    else if (s <= e)
    {
        if (hp > dmg[mid])
        {
            // if (mid + 1 <= e)
                solve(hp, dmg, timstp, mid + 1, e, n);
            // else
            //     return;
            //    cout << mid+1<<" ";
        }
        else if (hp <= dmg[mid])
        {
            
                solve(hp, dmg, timstp, s, mid , n);
            
            //    cout<<mid<<" " ;
        }
    }
    else
        return;
}
int main()
{
    int n, m, a, b, c;
    cin >> n >> m;
    vector<int> dmg, timstp, hp;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        dmg.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        timstp.push_back(b);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> c;
        hp.push_back(c);
    }
    for (int i = 0; i < m; i++)
    {
        if (hp[i] > dmg[n - 1])
        {
            cout << "-1 ";
            continue;
        }
        else if (hp[i] <= dmg[0])
        {
            cout << timstp[0] << " ";
            continue;
        }
        else
        {
            solve(hp[i], dmg, timstp, 0, n - 1, n);
        }
    }
    return 0;
}