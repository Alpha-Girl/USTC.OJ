#include <stdio.h>
#include <math.h>
#define max_element 20
int use[max_element];//0表示当前未使用 对应序号的英雄 1则反之
float value[max_element];//记录各个英雄的值
int result[max_element];//当前最优解 0表示当前未使用 对应序号的英雄 1则反之
float min;
int target;
void Check(int m){
    int i;
    float total=0;
    for(i=0;i<m;i++){
        if(use[i]==1)
            total=total+value[i];
    }
    if(fabs(total-target)<min)
    {
        for(i=0;i<m;i++){
            result[i]=use[i];
        }
        min=fabs(total-target);
    }
}
void Solve(int m, int used){
    if(m==used)
        Check(m);
    else {
        use[used]=1;
        Solve(m,used+1);
        use[used]=0;
        Solve(m,used+1);
    }
}
int main(){
    int n,i=1;
    
    printf("Input the num of heros:\n");//英雄数
    scanf("%d",&n);
    int m=n;
    while(n--){
        printf("Input the %dth hero's value\n",i++);//各个英雄的值
        scanf("%f",&value[n]);
    }
    for(i=0;i<max_element;i++){
        use[i]=0;
        result[i]=0;
    }
    printf("Input the target sum\n");//目标 的英雄值和
    scanf("%d",&target);
    min=target;
    Solve(m,0);
    for(i=0;i<m;i++){
        if(result[i]==1)
            printf("%f ",value[i]);//输出 所需英雄   （该解为英雄值之和 与 目标值 绝对值最小的解）
    }
}