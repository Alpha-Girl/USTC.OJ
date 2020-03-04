#include <stdio.h>
int main()
{
    int i,cnt,n,a[10020];
    n=1;a[0]=0;cnt=0;
    for(i=1;i<=10001;i++)
    {
        a[i]=a[i-1]+n;
        cnt++;
        if(cnt==n)
        {
            cnt=0;
            n++;
        }
    }
    scanf("%d",&n);
    while(n!=0)
    {
        printf("%d %d\n",n,a[n]);
        scanf("%d",&n);
    }
    return 0;
}
