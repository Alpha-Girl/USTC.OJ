#include <stdio.h>
int matrix[10][10];
int main(){
    int i,j,k,n,scale;
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&scale);
        for(j=0;j<scale;j++){
            for(k=0;k<scale;k++){
                scanf("%d",&matrix[j][k]);
            }
        }
    }
}