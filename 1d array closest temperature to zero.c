#include <stdio.h>
#include <stdlib.h>  
int main() {
    int N;
    scanf("%d", &N);
    int temps[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &temps[i]);
    }
    int closest = temps[0];
    for (int i = 1; i < N; i++) {
        if (abs(temps[i]) < abs(closest)) {
            closest = temps[i];
        } 
        else if (abs(temps[i]) == abs(closest) && temps[i] > closest) {
            closest = temps[i];
        }
    }
    printf("%d\n", closest);
    return 0;
}