/*

Floyd Triangle ( input by user )

*/


#include <stdio.h>

int main() {
    int num, val = 1;
    // user input
    printf("Enter a numebr : ");
    scanf("%d", &num);
    // logic
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", val);
            val++;
        }
        printf("\n"); 
    }

    return 0;
}
