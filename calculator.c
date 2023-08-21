#include<stdio.h>
#include<stdlib.h>


int main ()
{
  // declaring  variables
  int a;
  int b;
  char c;
// promting user for operands
     printf("Enter two operands:  ");
     scanf(" %d %d", &a, &b);

// clearing the newline character left in the input buffer
  while (getchar() != '\n')
  ;

// prompting the user for an operator
     printf("Enter an operator:( +,-,*,/) ");
     scanf(" %c", &c);

     // defining the operators
    switch (c)
     {
      // addition
    case '+':
        printf("%d + %d = %d\n", a, b, a+b);
      break;

      //subtraction
    case '-':
       printf("%d - %d = %d\n", a, b, a-b);
      break;

      //multiplication
    case '*':
       printf("%d * %d = %d\n", a, b, a*b);
      break;

      //division
    case '/':
    if (b == 0)
        {
          printf("Division by zero is not allowed\n");
        }
        else
        {

          printf("%d / %d = %d\n", a, b, a/b);
        }
      break;
      //if operator doesnt match any case
    default:
        printf("operator invalid\n");
     }

printf("\n");

}
