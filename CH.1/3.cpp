//3. Write a function that receives an integer. The function must return a string containing the
//binary representation of the integer
#define  _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string>

void decimalToBinary(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    // Stores binary representation of number.
    int binaryNum[32]; // Assuming 32 bit integer.
    int i = 0;

    for (; num > 0; ) {
        binaryNum[i++] = num % 2;
        num /= 2;
    }

    // Printing array in reverse order.
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}

int main() {
    int num=11;
    
    decimalToBinary(num);
    return 0;
}


	






