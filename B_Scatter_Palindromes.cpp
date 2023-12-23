#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    int n = s.size();
    int total = 0;
    for(int i=0;i<n;i++){
        int countOdd=0,countEven= 0;
        string temp;
        vector<int> freq(26,0);
        for(int len = i;len<n;len++){
            if(freq[s[len]-'a']%2 ){
                countOdd--;
                countEven++;
                freq[s[len]-'a']++;
            }else{
                countOdd++;
                countEven--;
                freq[s[len]-'a']++;
            }
            if(countOdd==0 || countOdd==1 ){
                total++;
            }
        }
    }
    cout<<total<<'\n';
}