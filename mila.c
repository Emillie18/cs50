#include <cs50.h>
#include <stdio.h>

int main(void)

{
  	int rows, i, j;

  	printf(" \n Please Enter the Number of Rows:  ");
    scanf("%i", &rows);

  	for ( i = 1 ; i <= rows; i++ )
  	{
      	for ( j = 1 ; j <= i; j++ )
      	{
          	printf(" %d",i);
      	}
      	printf("\n");
  	}
  	return 0;
}