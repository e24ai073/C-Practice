#include <stdio.h>
int sumN(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int n,result;
    printf("Enter N: ");
    scanf("%d",&n);
    result=sumN(n);
    printf("Sum of first %d natural numbers = %d\n", n, result);
    return 0;
}