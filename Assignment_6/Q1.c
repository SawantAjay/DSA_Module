//Implement sequential search

#include<stdio.h>

// Function to perform sequential search on an array
void sequentialSearch(int arr[], int n, int key) {
    int i, found = 0; // Initialize found as 0 (false) and index variable i

    // Loop through each element of the array
    for(i = 0; i < n; i++) {
        // Check if the current element matches the key
        if(arr[i] == key) {
            printf("Element %d found at position %d.\n", key, i + 1); 
            found = 1; // Set found to true
            break;     
        }
    }

    // If element was not found in the array
    if (!found) {
        printf("Element %d not found in the array.\n", key); // Indicate the key wasn't found
    }
}

int main() {
    int n, i, key;

    // Ask the user for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; 

    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Input each element into the array
    }

    // Ask the user for the element they want to search
    printf("Enter the element to search for: ");
    scanf("%d", &key);

    // Call the sequential search function with array, size, and key
    sequentialSearch(arr, n, key);

    return 0; // End of program
}
