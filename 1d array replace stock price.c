#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int max_so_far = -1;   
    for (int i =n-1;i>=0;i--){
        int current = arr[i];
        arr[i] = max_so_far;
        if (current > max_so_far){
            max_so_far = current;
        }
    }
    for (int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}