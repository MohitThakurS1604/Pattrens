#include <stdio.h>

int main() {
    int num, i, j, k;

    printf("Enter a number : ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        // Print leading blanks
        for (j = 0; j < num - i - 1; j++) {
            printf(" ");
        }
        // Print stars
        for (k = 0; k < num; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
