#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve()
{
}
vector<pair<char, pair<int, int>>> directions = {{'L', {0, -1}}, {'R', {0, 1}}, {'D', {1, 0}}, {'U', {-1, 0}}};
void dfs(pair<int, int> pos, pair<int, int> destination, vector<vector<char>> &arr, vector<vector<int>> &vis, string &temp, string &ans)
{
    int x = pos.first;
    int y = pos.second;
    if (pos == destination)
    {
        if (ans.size() == 0)
            ans = temp;
        else if (ans.size() > temp.size())
            ans = temp;
    }
    vis[x][y] = 1;
    if (pos == destination)
        vis[x][y] = 0;
    int n = arr.size();
    int m = arr[0].size();
    for (auto it : directions)
    {
        char direction = it.first;
        int delrow = it.second.first + x;
        int delcol = it.second.second + y;
        if (delrow >= 0 && delrow < n && delcol >= 0 && delcol < m && !vis[delrow][delcol] && arr[delrow][delcol] != '#')
        {
            temp.push_back(direction);
            dfs({delrow, delcol}, destination, arr, vis, temp, ans);
            temp.pop_back();
        }
    }
}
vector<char> path;
bool bfs(pair<int, int> pos, pair<int, int> destination, vector<vector<char>> &arr, vector<vector<char>> &brr, vector<vector<int>> &vis)
{
    // int x = pos.first;
    // int y = pos.second;
    // if(pos == destination){
    //     if(ans.size()==0) ans = temp;
    //     else if(ans.size()> temp.size()) ans = temp;
    // }
    vis[pos.first][pos.second] = 1;
    int n = arr.size();
    int m = arr[0].size();
    queue<pair<int, int>> q;
    q.push(pos);
    while (!q.empty())
    {
        pair<int, int> node = q.front();
        q.pop();
        int x = node.first;
        int y = node.second;
        if (node.first == destination.first && node.second == destination.second)
        {
            int k = 10;
            while(1){
            path.push_back(brr[x][y]);
            if(path.back() == 'L') y++;
            if(path.back() == 'R') y--;
            if(path.back() == 'D') x--;
            if(path.back() == 'U') x++;
            // cout<<brr[node.first][node.second]<<" "<<x<<" "<<y<<'\n';
            if(x == pos.first && y == pos.second) break;
            }
            return true;
        }
        for (auto it : directions)
        {
            char direction = it.first;
            int delrow = it.second.first + x;
            int delcol = it.second.second + y;
            if (delrow >= 0 && delrow < n && delcol >= 0 && delcol < m && !vis[delrow][delcol] && arr[delrow][delcol] != '#')
            {
                vis[delrow][delcol] = 1;
                q.push({delrow, delcol});
                brr[delrow][delcol] = direction;
                // cout<<direction<<" "<<arr[delrow][delcol]<<" ";
            }
            // cout<<'\n';
        }
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int m, n;
    cin >> n >> m;
    pair<int, int> source;
    pair<int, int> destination;
    vector<vector<char>> arr(n, vector<char>(m));
    vector<vector<char>> brr(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'A')
                source = {i, j};
            if (arr[i][j] == 'B')
                destination = {i, j};
        }
    }
    vector<vector<int>> vis(n, vector<int>(m, 0));
    string temp;
    string ans;
    ;
    if (bfs(source, destination, arr, brr, vis))
    {
        cout << "YES\n";
        cout << path.size() << '\n';
        while (path.size() > 0)
            cout << path.back(), path.pop_back();
    }
    else
        cout << "NO";
}