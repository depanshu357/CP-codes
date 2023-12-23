# include <stdio.h>
int check(int arr[],int n,int m){
    int flag=0;
    int count =0;
    for(int i=0;i<n;i++ ){
        for(int j=0;j<m;j++){
        if(arr[i*m+j]>arr[i*m+1+j]){
            return i;
        }
        }
    }
    return -1;
}
int main(){
int t;
scanf("%d",&t);
for(int k=0;k<t;k++){
    int n,m;
    int pos[n][2];
    scanf("%d %d",&n,&m);
    int arr[n*m];
    for(int i=0;i<n*m;i++){
        scanf("%d",&arr[i]);
    }
    if(check(arr,n,m)==-1){
        printf("1 1\n");
    }else{
        int max;int count=0;
        for(int i=check(arr,n,m);i<n;i++){
            
        }
    }
}
return 0;
}