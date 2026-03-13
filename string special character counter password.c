#include <stdio.h>
int main() {
    char password[100];
    int i=0,count=0;
    printf("enter password:");
    scanf("%s", password);
    while(password[i] !='\0'){
        if(!((password[i] >= 'A' &&password[i] <='Z')||(password[i] >= 'a' &&password[i] <='z')||(password[i] >= '0' &&password[i] <='9')))
        {
            count++;
        }
        i++;
    }
    printf("number of special character:%d", count);
    return 0;
}