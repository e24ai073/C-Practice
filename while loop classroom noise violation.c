#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int noise, i = 0; 
    int violationcount = 0; 
    int currentstreak = 0;  
    int longeststreak = 0;
    while (i < N ){
        scanf("%d", &noise);
        if (noise > 70){
            violationcount++;
            currentstreak++;
            if (currentstreak > longeststreak){
                longeststreak = currentstreak;
            }
        } else {
            currentstreak = 0;
        }
        i++;
    }
    printf("noise violation: %d\n", violationcount);
    printf("longest violation streak: %d\n", longeststreak);
    

    return 0;
}