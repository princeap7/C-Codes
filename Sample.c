#include <stdio.h>

int main() {
    int n = 5;  // Number of rows
    char currentChar = 'A';

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%c", currentChar);
        }
        currentChar++;
        printf("\n");
    }

    return 0;
}
