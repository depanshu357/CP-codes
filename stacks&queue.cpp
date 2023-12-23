#include<iostream>
#include<string> 
#include<stack>
#include<queue>
using namespace std;
int main(){
    int n =5,a ;
    stack <int > s;
    queue<int> q;
    for(int i=0;i<n;i++){
          cin >> a;
          s.push(a);
          q.push(a);
    }
    cout<< "STACK: ";
    while(s.empty()==0){
        cout << s.top()<<" ";
        s.pop();
    }
    cout <<endl<<  "QUEUE: ";
    while(q.empty()==0){
        cout<< q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;

}