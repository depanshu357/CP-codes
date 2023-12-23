#include<iostream>
#include<stack>
#include<string>
using namespace std;
void PrintStack(stack<char> sen)
{
    if (sen.empty())
        return;
    char x = sen.top();
    sen.pop();
    PrintStack(sen);
    cout << x ;
    // sen.push(x);
}
int main(){
    stack<char> sen;
    string s;
    cin>>s;
    sen.push(s[0]);
    // cout<<s.size()<<endl;
    for(int i=1;i<s.size();i++){
       if(s[i]!=sen.top()) {sen.push(s[i]);}
       else{sen.pop();}        
    }
    // cout<<s.size()<<endl;
    PrintStack(sen);
    // char arr[sen.size()];
    // for(int i=0;i<sen.size();i++){
    //     arr[i]=sen.top();
    //     sen.pop();
    // }
    // for(int i=sen.size()-1;i>=0;i--) cout<<arr[i];
    return 0;
}