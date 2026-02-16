#include<stdio.h>
int main(){
    int N, p;
    int result = 1;
    
    scanf("%d %d", &N, &p);
    
    for (int i = 1; i <= p; i++){
        result = result * N;
        }
        printf("%d ",result);
        return 0;
}