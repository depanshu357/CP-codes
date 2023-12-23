#include <bits/stdc++.h>
using namespace std;
int easify(char c)
{
    if (c == '(')
        return -1;
    if (c == '{')
        return -2;
    if (c == '[')
        return -3;
    if (c == ')')
        return 1;
    if (c == '}')
        return 2;
    if (c == ']')
        return 3;
    return 0;
}
string check(string s)
{
    stack<char> brackets;
    for(char &bracket : s)
    {
        if (easify(bracket) < 0)
        {
            brackets.push(bracket);
        }else{
            if(brackets.empty()) return "NO";
            if(easify(brackets.top())+easify(bracket)!=0) return "NO";
            brackets.pop();
        }
    }
    if (brackets.empty())
        return "YES";
    else
        return "NO";
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        cout << check(s) << endl;
    }
}