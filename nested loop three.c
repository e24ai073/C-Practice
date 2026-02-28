#include<stdio.h>
int main(){
    int i=1,j,num = 1;
    while(i <= 5){
        j = 1;
        while(j <= i){
            printf("%d", num);
            num++;
            j++;
        }
    printf("\n");
    i++;
    }
    return 0;
}