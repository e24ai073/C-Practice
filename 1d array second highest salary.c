#include <stdio.h>
#include<limits.h>
int main() {
    int N;
    scanf("%d", &N);
    if (N < 2) {
        printf("Not possible");
        return 0;
    }
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int highest = INT_MIN;
    int secondHighest = INT_MIN;

    for (int i = 0; i < N; i++) {
        if (arr[i] > highest) {
            secondHighest = highest;
            highest = arr[i];
        }
        else if (arr[i] < highest && arr[i] > secondHighest) {
            secondHighest = arr[i];
        }
    }

    if (secondHighest == INT_MIN)
        printf("No second highest salary");
    else
        printf("%d", secondHighest);

    return 0;
}