#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int min= n/2 + n%2;
    int max = n;
    if(n<m){
        cout<<"-1";
        return 0;
    }else{
        while(true){
            if(min%m==0){
                cout<<min;
                break;
            }else if(min==max){
                cout<<"-1";
                break;
            }
            min++;
        }
    }

}