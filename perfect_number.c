#include <stdio.h>

int main(){
    int t;
    for(int i=0;i<t;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        printf("%d %d",x^y);
    }
    return 0;
}