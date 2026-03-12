#include <stdio.h>
int main() {
    char address[200];
    int i=0,count=0;
    scanf("%[^\n]",address);
    while(address[i] !='\0'){
        if(address[i] == ' '){
            count++;
        }
        i++;
    }
    printf("%d",count);

    return 0;
}