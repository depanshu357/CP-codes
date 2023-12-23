#include<iostream>
#include<string>
using namespace std;
void func(string &s1){
    s1.push_back('5');
    cout << endl <<  s1.substr(0,4)<< endl;
}
int main(){
    // string s1,s2;
    // cin >> s1 >> s2;
    // cout << s1.size() << " " << s2.size() ;
    // s1.push_back('d');
    // s2.pop_back();
    // cout <<" "<<  s1 << " " << s2 << endl ;
    // cout <<" "<<  s1 << " " << s2 ;
    // s1 = s1+s2;
    // cout <<" "<<  s1 ;
    // func(s1);
    string str = "GeekForGeeks";
    std::string::iterator it;
    std::string::reverse_iterator ti;
    for( it = str.begin(); it<str.end();it++){
        cout<< *it;
    }
    cout<< endl;
    for( ti = str.rbegin(); ti<str.rend();ti++){
        cout<< *ti;
    }
    cout<<" "<< str[3];
    return 0;
}