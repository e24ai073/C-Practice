#include <stdio.h>
int isPerfect(int n) {
    int sum=0;
    for (int i=1;i<=n/2;i++) {
        if (n%i==0) {
            sum+=i;
        }
    }
    if (sum==n) {
        return 1; // Perfect number
    } else {
        return 0; // Not perfect
    }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (isPerfect(num)) {
        printf("Perfect Number\n");
    } else {
        printf("Not Perfect Number\n");
    }

    return 0;
}