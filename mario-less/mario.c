#include <stdio.h>
#include <cs50.h>

int main(void)

{
  int n;
  do
  {
       n = get_int("size: ");
  }
  while (n < 1);

   for ( int a = 1; a <= n; ++a)

     {
      for ( int b = n; b>a;--b)
       {
         printf(" ");
       }
   for (int c = 0 ; c<a ; ++c)

       {
        printf("#");
       }

      printf("\n");
     }
}