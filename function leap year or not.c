#include <stdio.h>
int isLeapYear(int year) {
    if ((year%4==0&&year%100!=0)||(year%400==0)){
        return 1; 
    }
    return 0; 
}
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    if (isLeapYear(year)) {
        printf("Leap Year\n");
    } else {
        printf("Not a Leap Year\n");
    }

    return 0;
}