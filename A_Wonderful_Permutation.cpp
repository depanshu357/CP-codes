#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        int arr1[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr1[i]=arr[i];
        }
        sort(arr,arr+n);
        for(int i=0;i<k;i++){
            int flag=0;
            for(int j=0;j<k;j++){ 
                 if(arr[i]==arr1[j]){flag=1;break;}
            }
            if(flag==1) count++;
            
        }
        cout<<k-count<<endl;
        
    }
}