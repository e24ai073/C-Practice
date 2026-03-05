#include <stdio.h>
#include <limits.h>
int main(){
    int R, C;
    scanf("%d %d", &R, &C);
    int salary[R][C];
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            scanf("%d", &salary[i][j]);
        }
    }
    int max = INT_MIN;
    int secondMax = INT_MIN;
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            int x = salary[i][j];
            if(x > max){
                secondMax = max;
                max = x;
            }
            else if(x < max && x > secondMax){
                secondMax = x;
            }
        }
    }
    if(secondMax == INT_MIN)
        printf("No second highest salary\n");
    else
        printf("%d\n", secondMax);

    return 0;
}