#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int ids[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &ids[i]);
    }
    int first_repeat = -1;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (ids[i] == ids[j]) {
                first_repeat = ids[i];
                goto end;  
            }
        }
    }

end:
    printf("%d\n", first_repeat);
    return 0;
}