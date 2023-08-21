#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
// prompting  user for message
    string message = get_string ( "message: ");

 // convert message to binary numbers

for (int a = 0; message[a] != 0; a++)
 {
   char character = message[a];
 // converting  to ASCII decimal
   int decimal = (int) character;

// converting the decimal to binary
   for (int b = 7; b >=0; b--)
    {
        int bit = (decimal >> b) & 1;
        print_bulb(bit);
    }

printf("\n");
 }

}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
