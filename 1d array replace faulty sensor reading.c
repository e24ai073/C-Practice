#include <stdio.h>
int main() {
    int N;
    printf("Enter number of readings: ");
    scanf("%d", &N);
    int readings[N];
    printf("Enter sensor readings:\n");
    for(int i = 0; i < N; i++) {
        scanf("%d", &readings[i]);
    }
    for(int i = 0; i < N; i++) {
        if(readings[i] < 0) {
            readings[i] = 0;
        }
}
    printf("Updated readings:\n");
    for(int i = 0; i < N; i++) {
        printf("%d ", readings[i]);
    }
    printf("\n");

    return 0;
}