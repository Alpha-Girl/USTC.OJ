#include <stdio.h>
int main()
{
    char s[300];
    int sum,i;
    scanf("%[^\n]",s);
    getchar();
    while(s[0]!='#')
    {
        sum=0;
        for(i=0;;i++)
        {
            if(s[i]=='\0')
                break;
            else if(s[i]==' ')
                ;
            else
                sum=sum+(i+1)*(s[i]-64);
        }
        printf("%d\n",sum);
        scanf("%[^\n]",s);
        getchar();
    }

}
