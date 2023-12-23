#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            arr[i] = arr[i] / 2;
        }
        else
        {
            if (flag == 1)
            {
                    arr[i] = (int)((arr[i] / 2.0) + 0.5);
                flag = 0;
            }
            else
            {
                arr[i] = (int)((arr[i] / 2.0) - 0.5);
                flag = 1;
            }
        }
        cout << arr[i] << endl;
    }
}