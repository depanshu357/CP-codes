#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

vector<int> NGE(vector<int> v)
{
    stack<int> st;
    vector<int> nge(v.size());
    for (int i = 0; i < v.size(); i++)
    {
        while (!st.empty() && v[i] > v[st.top()])
        {
            nge[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        nge[st.top()] = -1;
        st.pop();
    }
    return nge;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    vector<int> nge = NGE(v);
    // cout<<"yaya"<<endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << nge[i] << " ";
    // }
    // cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " << (nge[i] == -1 ? -1 : v[nge[i]]) << endl;
    }

    return 0;
}