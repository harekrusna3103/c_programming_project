#include <stdio.h>

int main() {
    int n, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Loop until the number becomes 0
    while (n != 0) {
        // Extract the last digit
        remainder = n % 10;
        
        // Append the digit to the reversed number
        reversed = reversed * 10 + remainder;
        
        // Remove the last digit from the original number
        n /= 10;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}