#include <stdio.h>
#include <limits.h>  
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;
    for (int i = 0; i < N; i++) {
        int num = arr[i];
        if (num > max1) {
            max2 = max1;
            max1 = num;
        } else if (num > max2) {
            max2 = num;
        }
        if (num < min1) {
            min2 = min1;
            min1 = num;
        } else if (num < min2) {
            min2 = num;
        }
    }
    int max_product1 = max1 * max2;
    int max_product2 = min1 * min2;
    int max_product = (max_product1 > max_product2) ? max_product1 : max_product2;
    printf("%d\n", max_product);

    return 0;
}