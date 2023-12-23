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
        if ((k * b <= s && (k * b+ (k-1)*n) >= s)|| (k-1 >= s && b==0))
        {
            long long countm = 0;
            long long count = s;
            if ((k * b + k - 1 )<= s)
            {
                // cout<<k*b+k-1<<" ";
                arr[countm++] = k * b +k - 1;
                // cout<<arr[countm-1]<<"<";
                count -= (k * b + k - 1);
            }
            else
            {
                // cout<<s<<" ";
                count -= (s);
                arr[countm++] = s;
            }
            if (n > 1)
            {

                for (long long i = 1; i < n; i++)
                {
                    if (count > (k - 1))
                    {
                        // cout<<k-1<<" ";
                        arr[countm++] = k - 1;
                        count -= (k - 1);
                    }
                    else
                    {
                        // cout<<count<<" ";
                        arr[countm++] = count;
                        count -= (count);
                    }
                }
            }
            // cout<<countm<< " "<<count<<" ";
            if (count != 0)
            {   
                // if(k==0 && b==0)
                cout << "-1";
            }
            else
            {
                while (countm )
                {
                    cout << arr[--countm] << " ";
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