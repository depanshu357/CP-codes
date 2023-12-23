#include <stdio.h>
void swap(long int* xp, long int* yp)
{
    long int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 

void selectionSort(long int arr[], long int n)
{
    long int i, j, min_idx;
 

    for (i = 0; i < n - 1; i++) {
 
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}
fact(long int x){
    if (x==0) return 1;
    
    return x*fact(x-1);
}
long int main(){
    long int n;
    scanf("%lld",&n);
    long int arr[n];
    for(long int i=0;i<n;i++){
        scanf("%ld",&arr[i]);
    }
    selectionSort(arr,n);
    long int j=0;
    long int ans  =1;
    for(long int i=0;i<n;i++){
         if(arr[j]==i){ ans=ans*(i-j);
         j++;}
    }
    ans= ans*fact(n-j);
    printf("%ld",ans);
    return 0;
}