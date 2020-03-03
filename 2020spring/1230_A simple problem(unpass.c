#include <stdio.h>

long long ff(float x)
{
    if(x<0)
        return 0;
    else if(x<1)
        return 1;
    else
        return ff(x-20.07)+ff(x-4.28)+ff(x-20.10)+ff(x-6.11);
}

int main()
{
    int i,t,x;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&x);
        printf("%lld\n",ff(x)%10000);
    }
    return 0;
}
