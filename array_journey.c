# include <stdio.h>
int adjust(int pos ,int k,int n){
    if (pos+k+1 >n) {return n;}
    else {return (pos +k+1);}
}
int max_point(int arr[],int n,int k,int pos,int point){
        if(pos == n-1) return point;
        int max = -1000000;
        for(int i=pos+1;i<adjust(pos,k,n);i++){
               point =  max_point(arr,n,k,i,point+arr[i]);
               if (max<point) max=point;
        }
        return max;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    int ans = max_point(arr,n,k,0,arr[0]);
    printf("%d",ans);
    return 0;
}