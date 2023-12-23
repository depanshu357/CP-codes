#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve()
{
    ll n;
    ll heroes = 1;
    cin >> n;
    vector<ll> X(n), Type(n);
    for (ll i = 0; i < n; i++)
        cin >> X[i];
    for (ll i = 0; i < n; i++)
        cin >> Type[i];
    set<ll> st;
    priority_queue<int> pq;
    ll splits = 0;
    // for(ll i=0;i<n;i++) cout<<X[i]<<" ";
    for (ll i = 0; i < n; i++)
    {
        if (Type[i] == 1)
        {
            // st.insert(X[i]);
            pq.push(X[i]);
        }
        else
        {
            if (heroes > X[i])
                continue;
            // auto it = st.rbegin();
            while (!pq.empty())
            {
                // cout<< *it <<" d";
                // heroes = (heroes + *it - 1);
                heroes = heroes + pq.top() -1;
                pq.pop();
                // st.erase(*it);
                // it = st.rbegin();
                splits++;
                // cout<<heroes<<" "<<X[i]<<"xi ";
                if (heroes > X[i])
                    break;
            }
            // st.erase(it);
            if ((heroes <= X[i])){
                cout << "-1\n";
                return ;
                break;
            }
        }
    }
    // for(auto it = st.begin();it!=st.end();it++) cout<< *it << " ";
    cout << splits << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }
}