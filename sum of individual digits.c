#include <stdio.h>

int main() {
    int n, sum = 0, remainder;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Store the original number to display it in the final output
    int original_num = n;

    // Loop until the number becomes 0
    while (n > 0) {
        // Extract the last digit
        remainder = n % 10;
        
        // Add the extracted digit to the total sum
        sum = sum + remainder;
        
        // Remove the last digit from the number
        n = n / 10;
    }

    printf("The sum of the digits of %d is: %d\n", original_num, sum);

    return 0;
}