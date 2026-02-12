#include<stdio.h>
int main(){
    int mark;
    printf("enter a mark:");
    scanf("%d",&mark);
    if(mark>=90){
         
    printf("grade A");
    }
    else if(mark>=75&&mark<=90){
        printf("grade B");
    }
    else{
        printf("grade C");
    }
    return 0;
}
