#include <iostream>
#include <string>
using namespace std;
void permutations(string s, string per, int l, int L, int index)
{
    if (l == L)
    {
        cout << per << endl;
        
    }
    if(index==L){
         return;
    }
    for (int i = index; i < L; i++)
    {  
        string p = per+s[index];
        permutations(s, p, l + 1, L, index + 1);
    }
}
int main()
{
    string s;
    cin >> s;
    int l;
    cin >> l;
    string per;
    cout<<per<<endl;
    // for(int i=0;i<s.size()-l;i++){
    permutations(s, per, 0, l, 0);
    // }
}