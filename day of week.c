#include<stdio.h>
int main(){
    int day;
    scanf("%d",&day);
    switch(day){


        case 2:printf("tuesday");break;
        case 3:printf("wednesday");break;
        case 4:printf("thursday");break;
        case 5:printf("friday");break;
        case 6:printf("saturnday");break;
        case 7:printf("sunday");break;
        default:printf("invalid day");break;
    }
    return 0;
}