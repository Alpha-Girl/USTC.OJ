#include <stdio.h>
int main()
{
    int i;
    int a[300],n;
    a[0]=0;
    a[1]=1;
    a[2]=2;
    for(i=3;i<=200;i++)
        a[i]=a[i-1]+a[i-2]+a[i-3];
    while(EOF!=scanf("%d",&n))
        printf("The New Fibonacci number for %d is %d\n",n,a[n]);
    return 0;
}
