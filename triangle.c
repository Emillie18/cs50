#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Please Enter the Number of Rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf("  "); // Print spaces to align the triangle
        }

        for (j = 1; j <= i; j++) {
            printf("* "); // Print asterisks to form the triangle
        }

        printf("\n");
    }

    return 0;
}
