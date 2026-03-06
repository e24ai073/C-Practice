#include <stdio.h>
int main(){
    int R, C;
    scanf("%d %d", &R, &C);
    int matrix[R][C];
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    int maxUnique = 0;
    int deptIndex = -1;
    for(int i = 0; i < R; i++){
        int uniqueCount = 0;
    for(int j = 0; j < C; j++){
            int isUnique = 1;
    for(int k = 0; k < j; k++){
                if(matrix[i][j] == matrix[i][k]){
                    isUnique = 0;
                    break;
                }
            }
            if(isUnique)
                uniqueCount++;
        }
       if(uniqueCount > maxUnique){
            maxUnique = uniqueCount;
            deptIndex = i;
        }
    }
    printf("Department with maximum unique scores: %d\n", deptIndex);
    printf("Number of unique scores: %d\n", maxUnique);

    return 0;
}
