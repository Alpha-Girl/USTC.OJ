#include <stdio.h>
#include <math.h>
int main()
{
    int nT,nN,i,j,nC;
    scanf("%d",&nT);
    for(i=1;i<=nT;i++)
    {
        scanf("%d",&nC);
        for(j=2;;j++)
        {
            if(nC<=pow(2,j))
                break;
        }
        if(abs(nC-pow(2,j)+1)<10e-6)
            printf("d\n",2*j);
        else
        {
            printf("%d\n",2*j);
        }
        
    }
    return 0;
}