#include <stdio.h>
int main() {
    char str[200];
    int i=0;
    scanf("%[^\n]",str); 
    while(str[i] !='\0'){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i] = str[i] + 32;  
        }
        printf("%c",str[i]);
        i++;
    }
    return 0;
}