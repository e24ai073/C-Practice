#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int codes[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &codes[i]);
    }
    int unique = 1; 
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (codes[i] == codes[j]) {
                unique = 0; 
                goto end;  
            }
        }
    }

end:
    if (unique)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}