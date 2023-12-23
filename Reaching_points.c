#include <stdio.h>
int can_reach(int x1,int y1,int x2,int y2){
    if ((x1==x2) && (y1==y2)){
        return 1;
    }
    if((x1>x2) || (y1>y2)){
        return 0;
    }
    return(can_reach(x1+y1,y1,x2,y2)||can_reach(x1,x1+y1,x2,y2));
}
int main(){
    long int x1,y1,x2,y2;
    scanf("%ld",&x1);
    scanf("%ld",&y1);
    scanf("%ld",&x2);
    scanf("%ld",&y2);
    if(can_reach(x1,y1,x2,y2)){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}