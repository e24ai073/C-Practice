#include <stdio.h>
int main() {
    int N;
    printf("Enter number of hours: ");
    scanf("%d", &N);
    int traffic[N];  
    printf("Enter traffic data: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &traffic[i]);
    }
    int peak_count = 0;
    for (int i = 1; i < N - 1; i++) {
        if (traffic[i] > traffic[i - 1] && traffic[i] > traffic[i + 1]) {
            peak_count++;
        }
    }
    printf("Number of peak hours: %d\n", peak_count);
    return 0;
}