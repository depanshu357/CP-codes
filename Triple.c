# include <stdio.h>
 int main(){
long long int t;
scanf("%lld",&t);
for(long long int i=0;i<t;i++){
    long long int n;
    scanf("%lld",&n);
    long long int num[n];
    long long int arr[n];
    for(long long int j=0;j<n;j++){
        num[j]=0;
        scanf("%lld",&arr[j]);
    }
    long long int count =0;
    long long int rec;
    for(long long int j=0;j<n;j++){
        num[arr[j]-1]++;
        if(num[arr[j]-1]>=3) {count++;rec=arr[j];}
    }
    if(count==0) printf("-1");
    else  printf("%lld",rec);
    printf("\n");
}
return 0;
}