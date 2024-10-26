//Implement binary search 

#include<stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            return mid;  // Key found at index mid
        } else if (arr[mid] < key) {
            low = mid + 1;  // Search in the right half
        } else {
            high = mid - 1;  // Search in the left half
        }
    }

    return -1;  // Key not found
}

int main() {
    int n, i, key, result;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements (in sorted order):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &key);

    result = binarySearch(arr, n, key);

    if (result != -1) {
        printf("Element %d found at position %d.\n", key, result + 1);  // 1-based index
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
