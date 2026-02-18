#include <stdio.h>
int main(){
  int N;
  scanf("%d",&N);
  int marks;
  int total = 0;
  int below40 = 0;
  for(int i = 0; i < N; i++){
   scanf("%d", &marks);
   total += marks;
   if(marks < 40){
       below40++;
   }
   }
    float average = (float)total / N;
  printf("average score: %.2f\n", average);
  printf("subjects below 40: %d\n", below40);
       return 0;
}