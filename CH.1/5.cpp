//5.Write a function that adds two digit strings in base b, where . Each string may
//contain as many as 1,000 digits. Return the sum in a string that uses the same number base

#define _CRT_SECURE_NO_WARNINGS
using namespace std; 
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <algorithm>

std::string Sum_of_Strings(const char* string1, const char* string2, int base) {
    // Convert the input strings to numbers
    int string1a = atoi(string1);
    int string2b = atoi(string2);

    // Calculate the lengths of the strings
    int sizeof1a = strlen(string1);
    int sizeof1b = strlen(string2);

    // Initialize the result string
    std::string sum;

    // Calculate the difference in the lengths of the strings
    int diff = abs(sizeof1a - sizeof1b);

    // Add zeros to the beginning of the shorter string
    // to make the lengths equal
    std::string s(diff, '0');
    if (sizeof1a < sizeof1b) {
        string1 = (s + string1).c_str();
    }
    else {
        string2 = (s + string2).c_str();
    }

    // Initialize the carry value
    int carry = 0;

    // Loop through the characters in the strings
    // starting from the last character
    for (int i = std::max(string1a, string2b) - 1; i >= 0; i--) {
        // Calculate the current digit and the carry
        int curr = carry + (string1[i] - '0') + (string2[i] - '0');
        carry = curr / base;
        curr = curr % base;

        // Add the current digit to the result string
        sum = (char)(curr + '0') + sum;
    }

    // If there is a remaining carry value,
    // add it to the result string
    if (carry > 0) {
        sum = (char)(carry + '0') + sum;
    }

    // Return the result string
    return sum;
}
int main() {
    // Define the input strings
    const char* string1 = "13";
    const char* string2 = "41";

    // Define the base
    int base = 10;

    // Calculate the sum of the strings
    std::string sum = Sum_of_Strings(string1, string2, base);

    // Print the result
    printf("%s + %s = %s\n", string1, string2, sum.c_str());

    return 0;
}
