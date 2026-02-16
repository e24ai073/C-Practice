#include<stdio.h>
int main(){
    int N,sum = 0, remainder;
    scanf("%d", &N);
    for(; N != 0; N = N / 10){
        remainder = N % 10;
        sum = sum + remainder;
        }
        printf("%d ",sum);
        return 0;
}