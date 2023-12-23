# include <stdio.h>
// void swap(long long int *x,long long int *y){
//     long long int temp = *x;
//     *x = *y;
//     *y = temp;
// }
int main(){
long long int n;
scanf("%lld",&n);
long long int arr[n];
for(long long int i=0;i<n;i++){
    scanf("%lld",&arr[i]);
}
for(long long int i=0;i<n;i++){
    for(long long int j=i+1;j<n;j++){
        if(arr[i]>arr[j]) {
            long long int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
long long int a = (n/2);
// for(long long int i=0;i<n;i++) prlong long intf("%d ",arr[i]);
if(n%2==0){printf("%lld",arr[a-1]);}
else{
 printf("%lld",arr[a]);}
return 0;
}