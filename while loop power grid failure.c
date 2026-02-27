#include <stdio.h>
int main() {
    int capacity,  N;
    scanf("%d", &capacity);
    scanf("%d", &N);
    int load, i = 0;
    int safehouse = 0, overloadfailures = 0;
    while(i < N){
        scanf("%d", &load);
        if (load <= capacity){
            safehouse++;
            
        }else {
            overloadfailures++;
        }
        i++;
    }
    printf("%d\n", safehouse);
    printf("%d\n", overloadfailures);
    return 0;
}