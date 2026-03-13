#include <stdio.h>
int main() {
    char log[100],target;
    int i=0,index=-1;
    printf("enter log string:");
    scanf("%s", log);
    printf("enter character to search:");
    scanf("%c",&target);
    while(log[i] !='\0'){
        if(log[i]==target){
            index=i;
            break;
        }
        i++;
}
    printf("first occurrence index: %d", index);
    return 0;
}