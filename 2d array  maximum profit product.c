#include <stdio.h>
#include <limits.h>
int main(){
    int R, C;
    scanf("%d %d", &R, &C);
    int a[R][C];
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            scanf("%d", &a[i][j]);
        }
    }
   int maxProduct = INT_MIN;
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            for(int k = 0; k < R; k++){
                for(int l = 0; l < C; l++){
                    if(i != k) {
                        int product = a[i][j] * a[k][l];
                        if(product > maxProduct){
                            maxProduct = product;
                        }
                    }
                }
            }
        }
    }

    printf("%d\n", maxProduct);

    return 0;
}