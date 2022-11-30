//2. Write a function that receives a string containing a 32-bit hexadecimal integer. The function
//must return the string’s integer value.
#define  _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string>

int main() {
	char sixteen_bit_number[32];
	printf("Enter your binary\n");
	scanf("%s", sixteen_bit_number);
	int num;
 num= atoi(sixteen_bit_number);
	int binary_num= 0;
	int reminder;
	int decimal_num = 0;
	 int base = 1;
	 
	 while (num >0)
	 {
		 reminder = num % 10;
		 decimal_num = decimal_num + reminder * base;
		 num = num / 10;
		 base = base * 2;
	}
	 printf(" The binary number is %d \t", binary_num);
	 printf(" \n The decimal number is %d \t", decimal_num);
	 _getch();
	 return 0;
}

