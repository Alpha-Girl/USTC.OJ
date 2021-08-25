#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char a[1000];
    char b[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", a);
        scanf("%s", b);

        int la = strlen(a);
        int lb = strlen(b);
        int c = 0;
        char t[lb][lb + 1];
        for (int j = 0; j < la - lb + 1; j++)
        {
            for (int k = 0; k < lb; k++)
            {
                int t = 1;
                for (int g = 0; g < k; g++)
                {
                    for (int l = 0; l < lb; l++)
                    {
                        if (b[(l + k) % lb] != b[(g + l) % lb])
                        {
                            t = 0;
                        }
                    }
                }

                if (t == 1 && k > 0)
                    continue;
                int flag = 1;

                for (int l = 0; l < lb; l++)
                {
                    if (b[(l + k) % lb] != a[j + l])
                    {
                        flag = 0;
                    }
                }
                if (flag == 1)
                    c++;
            }
        }
        printf("%d\n", c);
    }
}
