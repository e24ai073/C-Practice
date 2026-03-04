#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int lead[size];
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                lead[i]=arr[i];
            }else{
                lead[i]=0;
                break;
            }
        }    
    }
    lead[size-1]=arr[size-1];
    for(int i=0;i<size;i++){
        if(lead[i]>0)
    
    printf("%d",lead[i]);
}
    return 0;
}
