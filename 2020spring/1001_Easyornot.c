#include <stdio.h>
int main()
{
char str[10000];

while(EOF!=scanf("%[^\n]",str))
{printf("%s\n",str);
getchar();}
return 0;
}
