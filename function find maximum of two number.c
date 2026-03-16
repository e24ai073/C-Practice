#include <stdio.h>
int findMax(int a,int b) {
    if(a>b)
        return a;
    else
        return b;
}
int main() {
    int A,B;
    scanf("%d %d",&A,&B);
    int max=findMax(A,B);
    printf("%d",max);
    return 0;
}