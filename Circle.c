#include <stdio.h>

int main() {
    // Initialize an array with some numbers
    int array[] = {25, 11, 7, 75, 56};
    
    // Calculate the number of elements in the array
    int n = sizeof(array) / sizeof(array[0]);
    
    // Assume the first element is the largest initially
    int max = array[0];
    
    // Loop through the array starting from the second element
    for (int i = 1; i < n; i++) {
        // If the current element is greater than max, update max
        if (array[i] > max) {
            max = array[i];
        }
    }
    
    printf("The largest element in the array is: %d\n", max);
    
    return 0;
}