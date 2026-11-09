#include <stdio.h>

int main() {
    int n;
    // Using long long to prevent overflow for larger Fibonacci numbers
    long long t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; ++i) {
        // Print the current term
        printf("%lld ", t1);
        
        // Calculate the next term by adding the previous two
        nextTerm = t1 + t2;
        
        // Update variables for the next iteration
        t1 = t2;
        t2 = nextTerm;
    }
    
    printf("\n");

    return 0;
}