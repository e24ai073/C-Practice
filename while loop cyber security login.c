#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int  i = 0, status;
    int consecutivefail = 0;
    int totalfail = 0;
    int lockattempt = -1;
    while( i < N){
        scanf("%d", &status);
        if(status == 0){
            totalfail++;
            consecutivefail++;
            
            if(consecutivefail == 3 && lockattempt == -1) {
                lockattempt = i + 1;
            }
            
        }else{
            consecutivefail = 0;
        }
        i++;
        
    }
    if(lockattempt != -1)
    printf("lock triggered at attempt: %d\n",lockattempt);
    else
    printf("lock triggered at attempt: not triggered\n");
    printf("total failed attempt: %d\n",totalfail);
    return 0;
}