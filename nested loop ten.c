#include<stdio.h>
int main(){
    int i, j;
    int n = 5;
    for(i = 0; i <= n; i++){
        for(j = n - 1 - i; j < n; j++){
            printf("%c", 'A'+ j);
        }
            printf("\n");
        
    }
    return 0;
}