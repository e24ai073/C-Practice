#include <stdio.h>

int main(){
  int batterypercent, N;
  scanf("%d",&batterypercent);
  scanf("%d",&N);
  int drain;
  for(int i = 0; i < N; i++){
   scanf("%d", &drain);
   batterypercent -= drain;
   if(batterypercent < 0){
       batterypercent = 0;
       break;
   }
}
printf("%d", batterypercent);
       return 0;
}