#include <stdio.h>
int main(){
  int N;
  scanf("%d",&N);
  int loss, totalloss = 0, highlossdays = 0;
  for(int i = 0; i < N; i++){
   scanf("%d", &loss);
   totalloss += loss;
   if(loss > 100){
       highlossdays++;
   }
   }

  printf("Total loss: %d\n", totalloss);
  printf("high-loss days: %d\n", highlossdays);
       return 0;
}