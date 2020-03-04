#include <stdio.h>
int sss(int qian)
{
    int s=0;
    s=qian/100;
    qian=qian%100;
    s=s+qian/50;
    qian=qian%50;
    s=s+qian/20;
    qian=qian%20;
    s=s+qian/10;
    qian=qian%10;
    s=s+qian/5;
    qian=qian%5;
    s=s+qian;
    return s;
}

int main(){
    int qian,sum,min,i;
    scanf("%d",&qian);
    while(qian!=0)
    {
        min=sss(qian);
        for(i=0;i<=100;i++)
            if(sss(qian+i)+sss(i)<min)
                min=sss(qian+i)+sss(i);
        printf("%d\n",min);
        scanf("%d",&qian);
    }
    return 0;
}
