#include <stdio.h>
#include <stdlib.h>
int MyCompare( const void * elem1,
		   const void * elem2 )
{
	unsigned int * p1, * p2;
	p1 = (unsigned int *) elem1;
	p2 = (unsigned int *) elem2;
	return  * p1   - * p2 ;
}
int main()
{
    int a[20];
    int n,i,j,cnt,max,b;
    scanf("%d",&n);
    while(n!=-1)
    {
        a[0]=n;
        for(i=1;;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]==0)
                break;
        }
        qsort(a,i+1,sizeof(int),MyCompare);
        n=i+1;
        max=0;
        cnt=0;
        for(i=1;i<n;i++)
        {

            b=a[i];
            for(j=i+1;j<=n;j++)
            {
                if(a[j]==2*b)
                {
                    cnt++;
                    break;
                }
            }
        }
        printf("%d\n",cnt);
        scanf("%d",&n);
    }
    return 0;
}
