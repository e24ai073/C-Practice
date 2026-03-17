#include <stdio.h>
int isPalindrome(int num)
{
    int original=num;
    int reversed=0,remainder;

    while(num!=0)
    {
        remainder=num%10;
        reversed=reversed*10+remainder;
        num=num/10;
    }

    if(original==reversed)
        return 1;
    else
        return 0;
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d",&number);

    if(isPalindrome(number))
        printf("Yes, it is a Palindrome\n");
    else
        printf("No, it is not a Palindrome\n");

    return 0;
}