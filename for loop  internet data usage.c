#include <stdio.h>
int main(){
  int N, usage;
  int totaldata = 0, highusagedays = 0;
  scanf("%d",&N);
  for(int i = 0; i < N; i++){
   scanf("%d", &usage);
   totaldata += usage;
   if(usage > 2){
       highusagedays++;
   }
   }
  printf("total data: %d\n", totaldata);
  printf("high usage days: %d", highusagedays);
       return 0;
       
}