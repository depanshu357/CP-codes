#include <iostream>
using namespace std;

int main() {
    long long int n;
  cin >> n;
  long long int arr[n];
  for(long long int i=0;i<n;i++){
      arr[i]=0;
  }
  long long int x;
  for(long long int i=0;i<n-1;i++){
      cin >> x;
      arr[x-1]=1;
  }
  for(long long int i=0;i<n;i++){
      if(arr[i]==0) {cout << (i+1);break;}
  }
	return 0;
}