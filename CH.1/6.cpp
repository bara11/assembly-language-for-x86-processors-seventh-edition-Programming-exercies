//6. Write a function that adds two hexadecimal strings, each as long as 1,000 digits. Return a
//hexadecimal string that represents the sum of the inputs.
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int hexadecimal_addition(  char hexa1[1000],   char hexa2[1000]) {
	int num1 = (int)strtol(hexa1, NULL, 16);
	int num2 = (int)strtol(hexa2, NULL, 16);
	 int result;
	 char resultstring[1000];
result=printf("%x",num1 + num2);
return sprintf(resultstring, "%d", result);
}


int main() {
	 char hexa1[1000];
	 char hexa2[1000];
	printf("Please Enter Hex1\n");
	scanf("%s", hexa1);
	printf("\n");
	printf("Please Enter Hex2\n");
	scanf("%s", hexa2);
	printf("The addtion is \n");
	int result;
	result=hexadecimal_addition(hexa1, hexa2);
	
}
