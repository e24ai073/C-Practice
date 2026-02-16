#include<stdio.h>
int main(){
    int num, count = 0;
    printf("enter a number:");
    scanf("%d",&num);
    for(; num !=0; num = num / 10){
        count++;
    }
        printf("total digits = %d", count);
        
    
    return 0;
}