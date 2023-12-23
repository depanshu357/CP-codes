#include<bits/stdc++.h>
using namespace std;
int  main(){
    long long q;
    cin>>q;
    set<int> s;
    s.insert(0);
    for(long long i=0;i<q;i++){
        char c;
        long long num;
        cin>>c>>num;
        long long key = num;
        if(c=='+'){
           s.insert(num);
        }else{
            while(s.find(num)!=s.end()){
                num+=key;
            }
            cout<<num<<endl;
        }
    }
}