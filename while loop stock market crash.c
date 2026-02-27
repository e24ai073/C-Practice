#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int arr[N];
    int i = 0;
    while(i < N){
        scanf("%d", &arr[i]);
        i++;
    }
    int drops = 0;
    int consecutive = 0;
    int crashday = -1;
    i = 1;
    while(i < N){
        if(arr[i] < arr[i - 1]){
            drops++;
            consecutive++;
            if(consecutive == 3 && crashday == -1){
                crashday = i + 1;
            }
            
        }else {
            consecutive = 0;
        }
        i++;
    }
    if(crashday != -1)
    printf("crash day: %d\n", crashday);
    else
    printf("no crash\n");
    printf("total drops: %d\n", drops);
    return 0;
}