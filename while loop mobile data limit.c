#include <stdio.h>
int main() {
    int totaldata, N;
    int usage;
    int i = 0;
    int daysused = 0;
    scanf("%d", &totaldata);
    scanf("%d", &N);
    while (i < N){
        scanf("%d", &usage);
        if(totaldata >= usage){
            totaldata -= usage;
        }else {
            break;
        }
        i++;
    }
    printf("days used: %d\n", daysused);
    printf("remaining data: %d\n", totaldata);

    return 0;
}