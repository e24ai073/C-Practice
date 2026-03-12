#include <stdio.h>
int main() {
    char str[200];
    int i=0,count=0;
    scanf("%[^\n]", str);
    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u' ||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            count++;
        }
        i++;
    }

    printf("%d",count);

    return 0;
}