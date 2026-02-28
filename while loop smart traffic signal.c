#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int count, i = 0;
    int totalcongestion = 0;
    int currentstreak = 0;
    int longeststreak = 0;
    while( i < N){
        scanf("%d", &count);
        if(count > 20){
            totalcongestion++;
            currentstreak++;
            
            if(currentstreak > longeststreak) {
                longeststreak = currentstreak;
            }
            
        }else{
            currentstreak = 0;
        }
        i++;
        
    }
    printf("total congestion minutes: %d\n",totalcongestion);
    printf("longest congestion streak: %d\n",longeststreak);
    return 0;
}