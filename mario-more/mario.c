#include <cs50.h>
#include <stdio.h>

int main(void)
{
   int n;
    do
    {
       n = get_int("size: ");
    }
    while (n < 1);

 // Print the first triangle.

    for ( int a = 1; a <= n; ++a)
    {
        for ( int b = n; b > a; --b)
        {
            printf("  ");
        }

        for (int c = 0 ; c < a ; ++c)
        {
            printf("#");
        }

        printf("  ");

  // prints the second triangle

        for (int i = 0; i < a; i++)
        {
           printf("#");
        }

      printf("\n");
    }

}