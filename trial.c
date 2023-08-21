#include <cs50.h>
#include <stdio.h>

int main(void)

{
  int height = 8;

   for ( int a = 1; a<=height;++a)

     {
      for ( int b= height; b>a;--b)
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
