#include <stdio.h>
int main() {
    char text[200];
    int i = 0, wordCount = 0;
    printf("Enter a sentence: ");
    fgets(text, sizeof(text), stdin);
    while (text[i] != '\0') {
        if ((i == 0 && text[i] != ' ' && text[i] != '\n') ||
            (text[i] != ' ' && text[i-1] == ' ')) {
            wordCount++;
        }
        i++;
    }
    printf("Total words: %d\n", wordCount);
    return 0;
}