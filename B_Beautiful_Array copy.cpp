#include <iostream>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k, b;
        long long s;
        cin >> n >> k >> b >> s;
        long long arr[n] = {0};
        if (k * b <= s && ((k + k - 1) * b) >= s)
        {
        long long countm = 0;
            long long count = s;
            long long arr[n];
             for(int i=0;i<n;i++)
            {  
                if((2*k-1)<=count){
                    // cout<<k+k-1<<endl;
                    arr[i]=(k+k-1);
                    count-=(k+k-1);
                }else{
                    arr[i]=(count);
                    // cout<<count;
                    count-=(count);
                }

            }
            if(count>0)cout<<"-1";
            else{
                for(int i=0;i<n;i++){
                    cout<<arr[i]<<" ";
                }
            }
            cout << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}