#include <stdio.h>
int main() {
    int N;
    printf("Enter number of readings: ");
    scanf("%d", &N);
    int readings[N];
    printf("Enter readings:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &readings[i]);
    }
    int start = 0;
    int end = N - 1;
    int isPalindrome = 1;   
    while (start < end) {
        if (readings[start] != readings[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }
    if (isPalindrome)
        printf("Valid (Palindrome)\n");
    else
        printf("Not Valid (Not Palindrome)\n");

    return 0;
}