# include <stdio.h>
int main(){
int t ;
scanf("%d",&t);
for(int j=0;j<t;j++){
    int n;
    scanf("%d\n",&n);
    char c[n];
    for(int i=0;i<n;i++){
        scanf("%c",&c[i]);
    }
    int a;
    if(n%2==0) a=(n/2)-1;
    else a=(n/2);
    int count=1;
    for(int i=a;i>0;i--){
        if(c[i]==c[i-1]) count++;
        else break;
    }
    for(int i=a;i<n-1;i++){
        if(c[i]==c[i+1]) count++;
        else break;
    }
    printf("%d\n",count);
}
return 0;
}