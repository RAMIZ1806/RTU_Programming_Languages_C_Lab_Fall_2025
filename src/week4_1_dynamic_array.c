/*
 * week4_1_dynamic_array.c
 * Author: [Ramiz Aliyev]
 * Student ID: [241ADB142]
 * Description:
 *   Demonstrates creation and usage of a dynamic array using malloc.
 *   Students should allocate memory for an integer array, fill it with data,
 *   compute something (e.g., average), and then free the memory.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array = NULL;
    int n, i;
    int sum = 0;
    float average;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

   
    array = (int *)malloc(n * sizeof(int));

   
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &array[i]) != 1) {
            printf("Invalid input. Exiting.\n");
            free(array); 
            return 1;
        }
        sum += array[i];
    }

    
    average = (float)sum / n;

  
    printf("\nSum: %d\n", sum);
    printf("Average: %.2f\n", average);

    
    free(array);

    // TODO: Allocate memory for n integers using malloc
    // Example: arr = malloc(n * sizeof(int));

    // TODO: Check allocation success

    // TODO: Read n integers from user input and store in array

    // TODO: Compute sum and average

    // TODO: Print the results

    // TODO: Free allocated memory

    return 0;
}
