#include <stdio.h>
int main()
{
    int sum[1100],i;
    sum[0]=0;
    for(i=1;i<=1000;i++)
    {
        sum[i]=sum[i-1]+i;
    }
    while(EOF!=scanf("%d",&i))
    {
        printf("%d\n",sum[i]);
    }
    return 0;
}
