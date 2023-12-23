#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    int k;cin>>k;
    vector<char> v(n);
    vector<int> nums(n);
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<n;i++){
        nums[i] = v[i] - '0';
        // if(v[i])
    }
    int c = 0;
        queue<int> record;
        // int n = nums.size();
        for(int i=0;i<n;i++){
            // first solution
            
            // int pivot = record.size()%2==0?1-nums[i]:nums[i];
            // if(pivot==0){
            //     c++;
            //     record.push(i+k-1); 
            // }
            // if(!record.empty() && i==record.front())record.pop();

            //second solution
            if(nums[i]==1){
                if(record.empty() || record.size()%2==0){
                    c++;
                    record.push(i+k-1);
                }
            }else{
                if(record.size()%2){
                    c++;
                    record.push(i+k-1);
                }
            }
            if(!record.empty() && i>=record.front())record.pop();
        }
        // return record.empty() ? c : -1;
        if(record.empty()) cout<<"1\n";
        else cout<<"0\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}