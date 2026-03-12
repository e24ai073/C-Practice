#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    int i, len;
    scanf("%[^\n]", str);   
    len = strlen(str);
    for(i = len-1;i>=0;i--){
        printf("%c",str[i]);
    }
   return 0;
}