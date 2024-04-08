#include <stdio.h>

void printArray(int arr[]) {
    // Size of arr is not known here
    // It has decayed into a pointer
    printf("Size of array in function: %lu\n", sizeof(arr)); // Outputs the size of a pointer
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};

    // Size of myArray is known here
    printf("Size of array in main: %lu\n", sizeof(myArray)); // Outputs the total size of the array

    // Pass the array to the function
    printArray(myArray);

    return 0;
}


// OUTPUT:
// Size of array in main: 20
// Size of array in function: 8
