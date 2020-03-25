#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void DelZeros(char *str){
    int i,j=0;
    for(i=0;;i++){
        if(str[i]!='0')
            break;
    }
    for(;;i++){
        str[j]=str[i];
        j++;
        if(str[i]=='\0')
        break;
    }
}
int MyCompare( const void * elem1,
		   const void * elem2 )
{
	unsigned char * p1, * p2;
    int len1,len2;
    len1=strlen(p1);
    len2=strlen(p2);
    if(len1>len2)
    return 1;
    else if(len2>len1)
    return -1;
    else 
    return -strcmp(p1,p2);
}
int main(){
    int n,i;
    char m[1000000][27];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",m[i]);
        DelZeros(m[i]);
    }
    qsort(m,n,sizeof(char)*27,MyCompare);
    for(i=0;i<10;i++){
        printf("%s\n",m[i]);
    }
    return 0;
}