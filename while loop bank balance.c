#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int balance;
    scanf("%d", &balance);
    int i = 0; 
    int transaction;  
    int lowbalancedays = 0;
    while (i < N ){
        scanf("%d", &transaction);
        balance += transaction;
            if (balance < 2000){
                lowbalancedays++;
            }
        i++;
    }
    printf("final balance: %d\n", balance);
    printf("days below 2000: %d\n", lowbalancedays);
    

    return 0;
}