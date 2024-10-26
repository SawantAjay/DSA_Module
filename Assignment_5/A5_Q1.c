//Implement insertion sort

#include<stdio.h>

int main() {
    int n, a[100], temp, j;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Ask the user to enter the elements
    printf("Enter %d numbers: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]); // Input each element into the array
    }

    // Perform insertion sort on the array
    for (int i = 1; i < n; i++) {
        temp = a[i];    
        j = i - 1;       

        // Shift elements of the sorted portion that are greater than temp
        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j]; // Move element one position up
            j--;
        }
        a[j + 1] = temp; // Insert the element at the correct position
    }

    // Print the sorted array
    printf("After sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]); // Display each sorted element
    }

    return 0; 
}
