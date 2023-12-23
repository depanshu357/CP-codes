#include<iostream>
#include<queue>
using namespace std;
void solve(){
    int n,t1,t2,time;
    cin >> n;
    queue <int> line1,line2;
    for(int i=0;i<n;i++){
          cin>> t1 >> t2;
          line1.push(t1);
          line2.push(t2);
          if(i==0) time=line1.front();
        //   cout<< line1.back()<<" " <<line2.back()<<" ";
    }
    while(!line1.empty()){
        if(time>=line1.front() && time<=line2.front()){
            cout <<time<<" ";
            time++;
            line1.pop();line2.pop();
        }
        else if(time>line2.front()) {cout<<"0 ";line1.pop();line2.pop();}
        else if(time<line1.front()) {
            cout<<line1.front()<<" ";
            time=line1.front()+1;
            line1.pop();line2.pop(); 
        }
    }
    cout<<endl;
}
int main(){
    int t;
    cin >>t;
    for(int j=0;j<t;j++) solve();
    return 0;
}