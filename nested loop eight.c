#include<stdio.h>
int main(){
    int i=5, j;
    char ch;
    while(i >= 1){
        ch = 'A';
        j = 1;
    while(j <= i){
        printf("%c", ch);
        ch++;
        j++;
    }
    printf("\n");
    i--;
    }
    return 0;
}