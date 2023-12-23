#include <bits/stdc++.h>
using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define ll long long

void solve()
{
    int q;
    cin >> q;
    map<int, int> freq;
    vector<int> st;
    vector<int> ans;
    while (q--)
    {
        int op, val;
        cin >> op >> val;
        if (op == 1)
        {
            freq[val]++;
            st.push_back(val);
        }
        else
        {
            int n = st.size();
            int curr_max_freq = freq[st[0]], maxv = st[0];
            for (int i = 0; i < n; i++)
            {
                if (freq[st[i]] >= curr_max_freq)
                {
                    curr_max_freq = freq[st[i]];
                    maxv = st[i];
                }
            }
            for (int i = n - 1; i >= 0; i--)
            {
                if (st[i] == maxv)
                {
                    freq[st[i]]--;
                    ans.push_back(st[i]);
                    st.erase(st.begin() + i);
                    break;
                }
            }
        }
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return;
}

int main()
{
    fastio();

    solve();
    return 0;
}