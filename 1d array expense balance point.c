#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int expenses[N];
    long long totalSum = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &expenses[i]);
        totalSum += expenses[i];
    }
    long long leftSum = 0;
    for(int i = 0; i < N; i++) {
        long long rightSum = totalSum - leftSum - expenses[i];
        if(leftSum == rightSum) {
            printf("%d\n", i);
            return 0;   
        }
        leftSum += expenses[i];
    }
    printf("-1\n");
    return 0;
}