#include <stdio.h>
int main()
{
    int a,b;
    int i,m;
    while(EOF!=scanf("%d %d",&a,&b))
    {
        if(a>b)
        {
            m=b;
            b=a;
            a=m;
        }
        for(i=a;;i--)
        {
            if(a%i==0&&b%i==0)
                break;
        }
        printf("%d\n",a*b/i);
    }
    return 0;
}
