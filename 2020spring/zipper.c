#include <stdio.h>
int main()
{
    char a[500], b[500], c[1000];
    int n, m, i, j, k, l, flag1, flag2, d;
    scanf("%d", &n);
    d = 0;
    while (/* condition */ n--)
    {
        d++;
        scanf("%s[^' ']", a);
        scanf("%s[^' ']", b);
        scanf("%s", c);
        m = strlen(a);
        l = strlen(b);
        k = strlen(c);
        flag1 = 0;
        i = 0;
        for (j = 0; j < k; j++)
        {
            if (a[i] == c[j])
            {
                i++;
                while (/* condition */ i == m)
                {
                    /* code */ flag1 = 1;
                }
            }
        }
        i = 0;
        for (j = 0; j < k; j++)
        {
            if (b[i] == c[j])
            {
                i++;
                while (/* condition */ i == n)
                {
                    /* code */ flag2 = 1;
                }
            }
        }
        printf("Data set %d:", d);
        if (flag1 == 1 && flag2 == 1)
            printf(" yes\n");
        else
            printf(" no\n");
    }
}
}