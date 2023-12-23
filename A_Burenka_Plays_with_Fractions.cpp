#include<iostream>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        long long test;
        if(a*d==c*b)cout<<"0"<<endl;
        else if(a*d>c*b){
            if(c==0) cout<<"1"<<endl;
            else if((a*d)%(c*b)==0){
                cout<<"1"<<endl;
            }else{
                long long count=2;
                // if(a%c==0 || c%a==0) count++;
                // else count+=2;
                // if(b%d==0 || d%b==0) count++;
                // else count+=2;
                cout<<count<<endl;
            }
        }else if(a==0 && c==0){
            cout<<"0"<<endl;
        }else if(a==0){
            cout<<"1"<<endl;
        }
        else{
            if((c*b)%(a*d)==0){
                cout<<"1"<<endl;
            }else{
                long long count=2;
                // if(a%c==0 || c%a==0) count++;
                // else count+=2;
                // if(b%d==0 || d%b==0) count++;
                // else count+=2;
                cout<<count<<endl;
            }
        }
    }
}