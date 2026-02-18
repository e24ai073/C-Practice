#include <stdio.h>
int main(){
  int N, rainfall;
  int total = 0;
  int count = 0;
  scanf("%d",&N);
  for(int i = 0; i < N; i++){
   scanf("%d", &rainfall);
   total += rainfall;
   if(rainfall > 50){
       count++;
   }
   }

  printf("Total Rainfall: %d\n", total);
  printf("Days Exceeded 50 mm: %d", count);
       return 0;
}