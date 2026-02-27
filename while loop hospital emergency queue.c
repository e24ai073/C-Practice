#include <stdio.h>
int main() {
    int maxcapacity,  N;
    scanf("%d", &maxcapacity);
    scanf("%d", &N);
    int patients;
    int i = 0;
    int totalhandled = 0;
    int treated = 0;
    int rejected = 0;
    while(i < N){
        scanf("%d", &patients);
        if (totalhandled + patients <= maxcapacity){
            treated += patients;
            totalhandled += patients;
            
        }else {
            int remainingcapacity = maxcapacity - totalhandled;
            if (remainingcapacity > 0){
                treated += remainingcapacity;
                rejected += (patients - remainingcapacity);
                totalhandled = maxcapacity;
                
            }else {
                rejected += patients;
            }
        }
        i++;
    }
    printf("%d\n", treated);
    printf("%d\n", rejected);
    return 0;
}