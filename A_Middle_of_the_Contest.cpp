#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int hr1 = 10*(s1[0]-'0')+(s1[1]-'0');
    int min1 = 10*(s1[3]-'0')+(s1[4]-'0');
    int hr2 = 10*(s2[0]-'0')+(s2[1]-'0');
    int min2 = 10*(s2[3]-'0')+(s2[4]-'0');
    int meanhr,meanmin;
    meanmin=(min1+min2)/2;
    meanhr=(hr1+hr2)/2;
    if((hr1+hr2)%2!=0){
        meanmin+=30;
    }
    meanhr+=meanmin/60;
    meanmin=meanmin%60;
    if(meanhr/10==0) cout<<"0";
    cout<<meanhr<<":";
    if(meanmin/10==0) cout<<"0";
    cout<<meanmin;

}