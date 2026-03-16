#include <stdio.h>
int reverseNumber(int n)
{
    int rev=0;
    while (n!=0)
    {
        int digit =n%10;
        rev = rev*10+digit;
        n = n/10;
    }
    return rev;
}
int main()
{
    int num,result;
    printf("Enter an integer: ");
    scanf("%d",&num);

    result=reverseNumber(num);
    printf("Reversed Number = %d",result);

   return 0;
}