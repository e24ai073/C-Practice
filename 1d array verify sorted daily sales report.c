#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int sales[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &sales[i]);
    }
    for (int i = 0; i < N - 1; i++) {
        if (sales[i] >= sales[i + 1]) {
            printf("No");
            return 0;
        }
    }

    printf("Yes");
    return 0;
}