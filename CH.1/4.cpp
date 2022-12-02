//4. Write a function that receives an integer. The function must return a string containing the
//hexadecimal representation of the integer
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    long decimal_number, quotient, remainder;
    int i, j = 0;
    char hexadecimal_number[100];

    printf("Enter decimal number: ");
    scanf("%ld", &decimal_number);

    quotient = decimal_number;

    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimal_number[j++] = 48 + remainder;
        else
            hexadecimal_number[j++] = 55 + remainder;
        quotient = quotient / 16;
    }
    for (i = j; i >= 0; i--)
        printf("%c", hexadecimal_number[i]);
    return 0;
}
