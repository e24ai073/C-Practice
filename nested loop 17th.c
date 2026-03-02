#include <stdio.h>
int main() {
    int n = 5;
    for(int i = 1; i <= n; i++ ){
        for(int space = 1; space <= n - i; space++){
            printf(" ");
        }
            for(int star = 1; star <= i; star++){
                printf("* ");
        }
        for(int i = n - 1; i >= 1; i--){
            
        for(int space = 1; space <= n - i; space++){
            printf(" ");
        }
        for(int star = 1; star <= i; star++){
            printf("* ");
        }
    
    printf("\n");

}
    return 0;
}
}