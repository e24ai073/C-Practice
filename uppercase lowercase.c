#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("Lowercase: %c\n", ch + 32);
    }
    if (ch >= 'a' && ch <= 'z') {
        printf("Uppercase: %c\n", ch - 32);
    }

    return 0;
}
