#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int stops[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &stops[i]);
    }
    int start = 0, end = N - 1;
    while (start < end) {
        int temp = stops[start];
        stops[start] = stops[end];
        stops[end] = temp;
        start++;
        end--;
    }
    for (int i = 0; i < N; i++) {
        printf("%d ", stops[i]);
    }

    return 0;
}