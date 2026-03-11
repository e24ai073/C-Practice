#include <stdio.h>
#include <limits.h>
int main() {
    int R,C;
    scanf("%d%d",&R,&C);
    int matrix[R][C];
    for(int i=0;i<R;i++){
        for(int j=0 ;j<C;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int minSum = INT_MAX;
    int minRow = -1;
    for(int i=0;i<R;i++){
        int sum=0;
        for(int j=0;j<C;j++){
            sum += matrix[i][j];
        }

        if(sum !=0&&sum<minSum){
            minSum = sum;
            minRow = i;
        }
    }

    printf("%d",minRow);

    return 0;
}