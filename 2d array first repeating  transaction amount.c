#include <stdio.h>
int main() {
    int R,C;
    scanf("%d%d",&R,&C);
    int matrix[R][C];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int seen[1000];
    int count = 0;
    int found = -1;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            int val = matrix[i][j];
            int repeat = 0;

            for(int k=0;k<count;k++){
                if(seen[k]==val){
                    found=val;
                    repeat =1;
                    break;
                }
            }
            if(repeat){
                printf("%d",found);
                return 0;
            }
            seen[count++] =val;
        }
    }
    printf("No repeating transaction");
    return 0;
}