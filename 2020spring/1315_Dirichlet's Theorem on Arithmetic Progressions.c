#include <stdio.h>
#include <math.h>
int sushu(int a)
{
    int i;
    if(a==1)
        return 0;
    if(a==2)
        return 1;
    for(i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int i,a,d,n,cnt;
    scanf("%d %d %d",&a,&d,&n);
    while(a!=0)
    {
        cnt=0;
        for(i=0;;i++)
        {
            if(sushu(a+i*d))
            {
                cnt++;
                if(cnt==n)
                    break;
            }
        }
        printf("%d\n",a+i*d);
        scanf("%d %d %d",&a,&d,&n);
    }
    return 0;
}
