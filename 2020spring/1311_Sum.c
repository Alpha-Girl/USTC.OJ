#include <stdio.h>
int main()
{
    int i,a,sum;
    while(EOF!=scanf("%d",&a))
    {
        sum=0;
        if(a<1)
        {
            for(i=1;i>=a;i--)
            {
                sum=sum+i;
            }
        }
        else
        {
            for(i=1;i<=a;i++)
            {
                sum=sum+i;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
