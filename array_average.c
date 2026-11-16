#include <stdio.h>

int main(void) {
    // ==========================================
    // PART 1: 1-D Array (5 elements)
    // ==========================================
    int arr1[5];
    int sum1 = 0;
    float avg1;

    printf("--- 1-D ARRAY ---\n");
    printf("Enter 5 numbers:\n");

    // Input for 1-D array
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
        sum1 = sum1 + arr1[i]; // Add each number to sum
    }

    // Display 1-D array elements
    printf("1-D Array Elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }

    // Calculate and print average
    avg1 = (float)sum1 / 5.0; // Cast to float for decimal accuracy
    printf("\nAverage of 1-D Array: %.2f\n\n", avg1);

    // ==========================================
    // PART 2: 2-D Array (2x2 Matrix = 4 elements)
    // ==========================================
    int arr2[2][2];
    int sum2 = 0;
    float avg2;

    printf("--- 2-D ARRAY ---\n");
    printf("Enter 4 numbers for a 2x2 matrix:\n");

    // Input for 2-D array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arr2[i][j]);
            sum2 = sum2 + arr2[i][j]; // Add each number to sum
        }
    }

    // Display 2-D array elements in matrix format
    printf("2-D Array Elements:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n"); // New line after each row
    }

    // Calculate and print average
    avg2 = (float)sum2 / 4.0; // Divided by total number of elements (2 * 2 = 4)
    printf("Average of 2-D Array: %.2f\n", avg2);

    return 0;
}
