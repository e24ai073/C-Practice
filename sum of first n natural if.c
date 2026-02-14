#include<stdio.h>
int main(){
    int i,N,result = 0;
    scanf("%d", &N);
    for(int i=1;i <= N; i++)
     result = result + i;
    
    printf("%d",result);
    return 0;
}