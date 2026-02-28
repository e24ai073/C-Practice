#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int  i = 0, vibration;
    int consecutiveunsafe = 0;
    int unsafecount = 0;
    int breakdownpoint = -1;
    while( i < N){
        scanf("%d", &vibration);
        if(vibration > 70){
            unsafecount++;
            consecutiveunsafe++;
            
            if(consecutiveunsafe == 3 && breakdownpoint == -1) {
                breakdownpoint = i + 1;
            }
            
        }else{
            consecutiveunsafe = 0;
        }
        i++;
        
    }
    if(breakdownpoint != -1)
    printf("breakdown reading number: %d\n",breakdownpoint);
    else
    printf("breakdown reading number:not occurred\n");
    printf("unsafe readings count: %d\n",unsafecount);
    return 0;
}