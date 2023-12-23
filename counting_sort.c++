#include <stdio.h>
// using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int ind[10];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++) ind[i]=0;
    for(int j=0;j<n;j++){
        ind[arr[j]]++;
    }
    for(int i=1;i<10;i++){
        ind[i]=ind[i]+ind[i-1];
    }
    int ans[n];
    for(int i=0;i<n;i++){
        ans[ind[arr[i]]-1]=arr[i];
        ind[arr[i]]--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",ans[i]);
    }
    
    return 0;
}