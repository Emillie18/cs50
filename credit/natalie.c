#include <stdio.h>
#include <cs50.h>
#include <string.h>

// Function to validate the credit card number
string validate_credit_card(long long number)
{
    // Convert the number to a string for easier manipulation
    char num_str[20];
    sprintf(num_str, "%lld", number);

    // Check the length of the number
    int length = strlen(num_str);

    // Check if the number starts with a valid prefix
    if ((length == 15) && (strncmp(num_str, "34", 2) == 0 || strncmp(num_str, "37", 2) == 0))
    {
        return "AMEX";
    }
    else if ((length == 16) && (strncmp(num_str, "51", 2) == 0 || strncmp(num_str, "52", 2) == 0 ||
                                strncmp(num_str, "53", 2) == 0 || strncmp(num_str, "54", 2) == 0 ||
                                strncmp(num_str, "55", 2) == 0))
    {
        return "MASTERCARD";
    }
    else if ((length == 13 || length == 16) && (strncmp(num_str, "4", 1) == 0))
    {
        return "VISA";
    }
    else
    {
        return "INVALID";
    }
}

int main(void)
{
    // Prompt the user for a credit card number
    long long number = get_long_long("Number: ");

    // Validate the credit card number
    string card_type = validate_credit_card(number);

    // Print the result
    printf("%s\n", card_type);

    return 0;
}