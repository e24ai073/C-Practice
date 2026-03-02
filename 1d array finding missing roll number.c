#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N-1];
    int actualSum = 0;
    for (int i = 0; i < N - 1; i++) {
        scanf("%d", &arr[i]);
        actualSum += arr[i];
    }
    int expectedSum = N * (N + 1) / 2;
    int missing = expectedSum - actualSum;
    printf("%d", missing);

    return 0;
}