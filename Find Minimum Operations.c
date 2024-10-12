#include<stdio.h>
int main()
{
    int t,k,n,count = 0;
    scanf("%d",&t);
    while(t-- > 0)
    {
        count = 0;
        scanf("%d %d",&n,&k);
        if(k != 1)
        {
            while(n != 0)
            {
                count += n % k;
                n = n / k;
            }
            printf("%d\n",count);
        }
        else
        {
            printf("%d\n",n);
        }

    }
}
