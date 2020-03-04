#include <stdio.h>
int findmin(int a[],int i,int n){
    int min,j;
    min=a[i];
    for(j=i;j<=n;j++)
    {
        if(a[j]<min)
            min=a[j];
    }
    return min;
}
int main()
{
    int n;
    int a[5500];
    int max,min,i;
    scanf("%d",&n);
    while(n!=0)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);

        }
        max=a[1]-a[2];
        for(i=1;i<n;i++)
        {
            min=findmin(a,i,n);
            if((a[i]-min)>max)
                max=a[i]-min;
        }
        printf("%d\n",max);
        scanf("%d",&n);
    }
    return 0;
}
