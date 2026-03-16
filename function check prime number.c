#include <stdio.h>
#include <math.h>
int checkPrime(int n)
{
    if(n<=1)
        return 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
    if (checkPrime(num))
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}