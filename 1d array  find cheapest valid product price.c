#include <stdio.h>
int main() {
    int N;
    printf("Enter number of products: ");
    scanf("%d", &N);
    int prices[N];
    printf("Enter prices:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &prices[i]);
    }
    int minPrice = 0;
    int found = 0;   
    for (int i = 0; i < N; i++) {
        if (prices[i] > 0) {   
            if (!found || prices[i] < minPrice) {
                minPrice = prices[i];
                found = 1;
            }
        }
    }
    if (found)
        printf("Cheapest valid price: %d\n", minPrice);
    else
        printf("No valid product price found.\n");

    return 0;
}