#include <stdio.h>
int main() {
    int N;
    printf("Enter number of students: ");
    scanf("%d", &N);
    int marks[N];
    int sum = 0;
    printf("Enter marks:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    float average = (float)sum / N;
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (marks[i] > average) {
            count++;
        }
    }
    printf("Class Average: %.2f\n", average);
    printf("Students above average: %d\n", count);

    return 0;
}