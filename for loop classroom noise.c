#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int noise;
    int maxnoise = -1;
    int noisycount = 0;
    for(int i = 0; i < N; i++){
        scanf("%d", &noise);
        if(noise > maxnoise ){
            maxnoise = noise;
        }
        if(noise > 70){
            noisycount++;
        }
    }
    printf("maximum noise level: %d\n", maxnoise);
    printf("noisy periods: %d\n", noisycount);

    return 0;
}