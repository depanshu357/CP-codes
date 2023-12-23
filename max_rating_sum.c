#include <stdio.h>
int main(){
    long int n;
    scanf("%ld",&n); 
     long int arr[n];
    for( long int i=0;i<n;i++){
        scanf("%ld",&arr[i]);
    }
    long int maxsum=-1000000000;
    for(long int i=1;i<=n;i++){
        for(long int t=0; t<=n-i;t++){
            long int sum=0;
            for(long int k=t;k<t+i;k++){
                   sum = sum + arr[k];
            }
            if(maxsum<sum) maxsum=sum;

        }
    }
    printf("%ld",maxsum);
    return 0;
}