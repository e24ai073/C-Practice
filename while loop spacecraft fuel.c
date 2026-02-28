#include<stdio.h>
int main(){
    int fuel, N;
    scanf("%d", &fuel);
    scanf("%d", &N);
    int  i = 0;
    int burn;
    int emergencystage = -1;
    int fuelwasted = 0;
    while( i < N){
        scanf("%d", &burn);
        fuel -= burn;
        if(fuel < 0 && emergencystage == -1){
            emergencystage = i + 1;
            fuelwasted = -fuel;
            
        }
        i++;    
        }
        
        
    
    if(emergencystage != -1)
    printf("emergency stage: %d\n", emergencystage);
    else
    printf("emergency stage:not occurred\n");
    printf("fuel wasted: %d\n", fuelwasted);
    return 0;
}