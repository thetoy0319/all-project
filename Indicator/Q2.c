#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE], size, i;
    int* ptr;

    printf("Enter the size of the array (up to %d): ", MAX_SIZE);
    scanf("%d", &size);

    printf("Enter the elements of the array: \n");
    for (i = 0; i < size; i++) {
        scanf("%d", arr + i);
    }

    printf("The elements of the array are: \n");
    ptr = arr;  // Assign the base address of the array to the pointer

    for (i = 0; i < size; i++) {
        printf("%d ", *ptr);  // Print the value at the current pointer location
        ptr++;  // Move the pointer to the next element
    }

    return 0;
}
