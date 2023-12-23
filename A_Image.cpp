#include <iostream>
#include <string>
// #include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string l1, l2;
        cin >> l1 >> l2;
        l1 = l1 + l2;
        // cout<<l1<<" "<<l1[2]<<endl;
        int cl1 = 0, cl2 = 0, cl3 = 0, cl4 = 0;
        // map<char, int> mp;
        int arr[26] = {0};
        for (int i = 0; i < 4; i++)
        {
            arr[l1[i] - 'a']++;
            if (arr[l1[i]-'a'] == 4)
                cl4 = 1;
            if (arr[l1[i]-'a'] == 3)
                cl3 = 1;
            if (arr[l1[i]-'a'] == 2)
                cl2++;
            if (arr[l1[i]-'a'] == 1)
                cl1++;
        }
        if (cl4)
            cout << "0" << endl;
        else if (cl3)
            cout << "1" << endl;
        else if (cl2 == 2)
            cout << "1" << endl;
        else if (cl2 == 1 && cl1 == 3)
            cout << "2" << endl;
        else if (cl1 == 4)
            cout << "3" << endl;
    }
}