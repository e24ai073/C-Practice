#include <stdio.h>
int power(int base,int exp) {
    if(exp==0)
        return 1;              
    else
        return base*power(base,exp-1);  
}
int main() {
    int A,B;
    printf("Enter base and exponent: ");
    scanf("%d %d",&A,&B);
    int result=power(A,B);
    printf("Result=%d",result);
    return 0;
}