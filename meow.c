#include <stdio.h>

int main(void)

{
    int size, i, j;

    printf("Enter the size of the isosceles triangle: ");
    scanf("%d", &size);

    // Upper part of the triangle
    for (i = 1; i <= size; i++) {
        // Print spaces before the stars
        for (j = 1; j <= size - i; j++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
submit50 cs50/problems/2023/x/mario/more