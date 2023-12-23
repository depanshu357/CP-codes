#include <stdio.h>
int check(char c[],int n){
    int flag1=0,flag2=0;
    for(int i=0;i<n;i++){
        if(c[i]=='W'){if(flag1==flag2){flag1=0;flag2=0;continue;}
        else return -1; }
        if(c[i]=='R'){flag1=1;}
        if(c[i]=='B'){flag2=1;}
    }
    if(flag1==flag2){return 0;}
        else return -1;
}
int main()
{
    int t;
    scanf("%d\n", &t);
    for (int j = 0; j < t; j++)
    {

        int n;
        scanf("%d\n", &n);
        char c[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%c", &c[i]);
        }
        if(check(c,n)==0) printf("YES");
        else printf("NO");
        // printf("%d",check(c,n));
        printf("\n");
    }

    return 0;
}