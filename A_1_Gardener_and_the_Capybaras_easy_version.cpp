#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int length = s.size();
    string ans1,ans2,ans3;
    if(s[0]=='a' && s[length-1]=='a'){
        ans1= s.substr(0,1);
        ans2= s.substr(1,length-2);
        ans3 = s.substr(length-1,1);
    }else if(s[0]=='b' && s[length-1]=='b'){
        bool flag= false;
        for(int i=1;i<length-1;i++){
            if(s[i]=='a'){
                ans1 = s.substr(0,i);
                ans2= 'a';
                ans3 = s.substr(i+1,length-i);
                break;
                flag= true;
            }
        }
        if(!flag){
                ans1 = s.substr(0,1);
                ans2= s.substr(1,length-2);
                ans3 = s.substr(length-1,1);
            
        }

    }else{
        // ans1= s.substr(0,1);
        // ans2= s.substr(1,length-2);
        // ans3 = s.substr(length-1,1);
        int flag=0;
        for(int i=1;i<length-1;i++){
            if(s[i]=='a'){ans2='a';
            ans1=s.substr(0,i);
            ans3=s.substr(i+1,length-i);
            flag=1;
            break;
            }
        }
        if(!flag){
        for(int i=1;i<length-1;i++){
            if(s[i]=='b'){
                ans1=s.substr(0,i);
                ans3=s.substr(length-1,1);
                ans2 =s.substr(i,length-2-i+1);
                break;
            }
        }
        }
    }
    if((ans2>=ans1 && ans2>=ans3) ||(ans2<=ans1 && ans2<=ans3)){
        cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
    }else{cout<<":("<<endl;}
}
int main(){
    int t;cin>>t;
    while(t--)solve();
}