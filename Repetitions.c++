#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    long long int n = s.length();
    long long int cont=1;
    long long int best=0;
    for(long long int i =0;i<n;i++){
         if(s[i]==s[i-1]) cont++;
         else cont=1;
         if(best<cont) best =cont;
    }
    // cout << s[0]<<"\n";
    // cout << s[2]<<"\n";
    // cout << s.length() <<"\n";
    // cout << sizeof(s[0])<<"\n";
    // cout << s << "\n";
    // cout << n <<"\n";
    cout << best;
    return 0;
}