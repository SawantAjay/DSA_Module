// Write a menu driven program to perform operations in an array. 

#include <stdio.h>

#define MAX 100 // Maximum size of the array

int array[MAX];
int size = 0; // Current number of elements in the array

// Function to insert a value into the array
void insert(int value) {
    if (size < MAX) { // Check if array has space
        array[size++] = value; // Insert value and increase size
        printf("Inserted %d\n", value);
    } else {
        printf("Array is full!\n");
    }
}

// Function to delete a value from the array
void delete(int value) {
    int found = 0; // Flag to check if value is found
    for (int i = 0; i < size; i++) {
    if (array[i] == value) { // If value is found
    found = 1;
    for (int j = i; j < size - 1; j++) { // Shift elements left
    array[j] = array[j + 1];
   }
    size--; // Decrease size after deletion
    printf("Deleted %d\n", value);
    break;
    }
    }
    if (!found) {
        printf("Value not found!\n");
    }
}

// Function to search for a value in the array
void search(int value) {
    for (int i = 0; i < size; i++) {
        if (array[i] == value) { // If value is found
            printf("%d found at position %d\n", value, i);
            return;
        }
    }
    printf("Value not found!\n");
}

// Function to display all elements in the array
void display() {
    if (size == 0) {
    printf("Array is empty!\n");
    } 

    else {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) { // Print all elements
    printf("%d ", array[i]);
    }

    printf("\n");
    }
}

int main() {
    int choice, value;

  
    printf("\nMenu:\n1. Insert\n2. Delete\n3. Search\n4. Display\n5. Exit\n");

    while (choice != 5){
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
    printf("Enter value to insert: ");
    scanf("%d", &value);
    insert(value); // Insert value into array
    break;

    case 2:
    printf("Enter value to delete: ");
    scanf("%d", &value);
    delete(value); // Delete value from array
    break;

    case 3:
    printf("Enter value to search: ");
    scanf("%d", &value);
    search(value); // Search value in array
    break;

    case 4:
    display(); // Display array elements
    break;

    case 5:
    printf("Exiting...\n");
    break;
    default:
    printf("Invalid choice!\n");
   }
} 
    return 0;
}
