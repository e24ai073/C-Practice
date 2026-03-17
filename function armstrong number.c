#include <stdio.h>
#include <math.h>
int isArmstrong(int num) {
    int original=num,remainder,result=0,count=0;
    int temp = num;
    while(temp!=0) {
        count++;
        temp/=10;
    }
    temp = num;
    while(temp != 0) {
        remainder =temp%10;
        result += pow(remainder,count);
        temp/=10;
    }
   if(result==original)
        return 1;
    else
        return 0;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    if(isArmstrong(number))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}