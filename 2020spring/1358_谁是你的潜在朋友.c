#include <stdio.h>
int main()
{
    int m,n;
    int a[330],b[333],i;
    scanf("%d %d",&n,&m);
    for(i=1;i<=m;i++)
    {
        b[i]=0;
    }
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);
        b[m]++;
        a[i]=m;
    }
    for(i=1;i<=n;i++)
    {
        if(b[a[i]]==1)
            printf("BeiJu\n");
        else
            printf("%d\n",b[a[i]]-1);
    }
    return 0;
}
