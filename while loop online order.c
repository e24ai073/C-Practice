#include <stdio.h>
int main() {
    int N;
    int status;
    int i = 0;
    int success = 0,cancelled = 0;
    scanf("%d", &N);
    while(i < N){
        scanf("%d", &status);
        if(status == 1){
            success++;
        }else if (status == 0){
            cancelled++;
        }
        i++;
    }
    printf("successful order: %d\n", success);
    printf("cancelled orders: %d\n", cancelled);
        if(cancelled > success) {
            printf("risk status: high risk\n");
        }  else {
            printf("risk status: normal\n");    
        }
    return 0;
}