#include <stdio.h>
int main()
{
    long long int t;
    scanf("%lld", &t);
    for (long long int i = 0; i < t; i++)
    {
        long long int n;
        scanf("%lld", &n);
        if (n % 2 == 0)
        {

            // printf("%lld\n",(n/6)*6);
            long long int x, y, min, max;
            int flag = 0;
            for (long long int x = (n / 6); x >= 0; x--)
            {
                long long int y = ((n - (6 * x)) / 4);
                if (((n - (6 * x)) % 4) == 0)
                {
                    flag++;
                    if (flag == 1)
                    {
                        min = (x + y);
                    }
                    break;
                }
            }
            for (long long int x = n / 4; x >= 0; x--)
            {
                long long int y = ((n - 4 * x) / 6);
                if (((n - 4 * x) % 6) == 0)
                {
                    flag++;
                    max = x + y;
                    break;
                }
            }

            //   if ( ((6*x) + (4*y) )== n) flag++;
            //   if(flag==1) {min = x+y;max=x+y;}
            //   else if(flag>1){
            //       if((x+y)>max) max=(x+y);
            //       if((x+y)<min) min=(x+y);
            //   }
            if (flag == 2)
                printf("%lld %lld\n", min, max);
            else
                printf("-1\n");
        }else{
            printf("-1\n");
        }
    }
    return 0;
}