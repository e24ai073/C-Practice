#include <stdio.h>
int main() {
    char id[100];
    int i=0,count=0;
    printf("enter product id:");
    scanf("%s", id);
    while(id[i] !='\0'){
        if(id[i] >= '0'&&id[i]<='9'){
            count++;
        }
        i++;
    }
    printf("number of digits in product id:%d",count);
    return 0;
}