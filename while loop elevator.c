#include <stdio.h>
int main() {
    
    int maxweight, N;
    int weight;
    int i = 0;
    int totalweight = 0;
    int passengers = 0;
    scanf("%d", &maxweight);
    scanf("%d", &N);
    while(i < N){
        scanf("%d", &weight);
        if(totalweight + weight <= maxweight){
            totalweight += weight;
            passengers++;
        }else {
            break;
        }
        i++;
    }
    printf("passengers entered: %d\n", passengers);
  printf("total loaded: %d\n", totalweight);
        
        
    return 0;
}