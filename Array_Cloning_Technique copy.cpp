#include <iostream>
#include<map>
#include<vector>
using namespace std;
void swap(long long *xp, long long *yp)
{
    long long temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int partition(long long arr[], int low, int high)
{
    int i = low - 1;
    int pivot = arr[high];
    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quicksort(long long arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // cout<<t<<endl;
        int n;
        cin >> n;
         vector<long long > arr;
        map<long long ,int> mp;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin>>z;
            arr.push_back(z);
        }
        if (n == 1)
        {
            cout << "0\n";
            continue;
        }
        
        int maxcount = 1, count = 1, num;
        for(int i=0;i<n;i++){
            if(mp.find(arr[i])==mp.end()){
                mp[arr[i]]=1;
            }
            else mp[arr[i]]++;
            if(maxcount<mp[arr[i]]) maxcount=mp[arr[i]];
        }

        // if (maxcount < count)
        // {
        //     maxcount = count;
        //     count = 1;
        // }
        // cout<<maxcount<<" "<<n<<" ";
        int a = 0, b = n - maxcount;
        while (maxcount < n)
        {
            maxcount = maxcount * 2;
            a++;
        }
        cout << a + b << "\n";
    }
    return 0;
}