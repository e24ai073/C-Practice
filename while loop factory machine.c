#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    int i = 0;
    while(i < N) {
        scanf("%d", &arr[i]);
        i++;
    }
    int current_streak = 0;
    int max_streak = 0;
    i = 0;
    while(i < N) {
        if(arr[i] == 0) {
            current_streak++;
            if(current_streak > max_streak) {
                max_streak = current_streak;
            }
        } else {
            current_streak = 0;
        }
        i++;
    }
     printf("%d\n", max_streak);
    return 0;
}