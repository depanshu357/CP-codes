#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int check(int x, int y, vector<int> px, vector<int> py, int n)
{
    int flag = 0, flag2 = 0;
    for (int i = 0; i <= px.size(); i++)
    {
        if (x == px[i])
        {
            flag++;
        }
    }
    for (int i = 0; i <= py.size(); i++)
    {
        if (y == py[i])
        {
            flag2++;
        }
    }
    if (flag == 2 && flag == 2)
        return 1;
    else
        return 0;
}
int main()
{
    int w, h, n, x, y, sub;
    cin >> w >> h >> n;
    vector<int> px, py, area;
    px.push_back(0);
    px.push_back(n);
    px.push_back(0);
    px.push_back(n);
    py.push_back(0);
    py.push_back(n);
    py.push_back(n);
    py.push_back(0);

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        px.push_back(x);
        py.push_back(y);
        cin >> x >> y;
        px.push_back(x);
        py.push_back(y);
    }
    // for(int i=0;i<px.size();i++) cout<<px[i]<<" "<<py[i]<<" ";
    for (x = 0; x <= n; x++)
    {
        for (int y = 0; y <= n; y++)
        {
            if (check(x, y, px, py, n))
            {
                int i, j;
                for (i = 0; i < px.size(); i++)
                {
                    if (x == px[i] && py[i] != y)
                        break;
                }
                for (j = 0; j < py.size(); j++)
                {
                    if (y == py[j] && px[i] != x)
                        break;
                }
                sub = (py[i] - y) * (px[j] - x);
            area.push_back(sub);
            }
        }
    }
    sort(area.begin(), area.end());
    for(int i=0;i<area.size();i++){
        cout<<area[i]<<" ";
    }

    return 0;
}