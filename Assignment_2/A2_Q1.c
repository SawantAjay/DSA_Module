/* Implement stack using arrays */

#include<stdio.h>
#define MAX_SIZE 10

int stack[MAX_SIZE];
int top = -1;   // Globally declared variable for stack top
int x;          // Globally declared variable for element to push

// Push an element onto the stack
void push() {
    if (top == MAX_SIZE - 1) { // Check if stack is full
        printf("Array is full\n");
    } else {
        printf("Enter the element to push in stack: ");
        scanf("%d", &x);
        top++;
        stack[top] = x; // Add element to stack
    }
}

// Pop the top element from the stack
void pop() {
    if (top == -1) { // Check if stack is empty
        printf("There is no element to pop.\n");
        return;
    }
    printf("%d popped from the stack.\n", stack[top]);
    top--; // Decrement top after pop
}

// Display the top element of the stack
void Top() {
    if (top == -1) { // Check if stack is empty
        printf("Stack is empty.\n");
    } else {
        printf("Top most element of stack is %d.\n", stack[top]);
    }
}

// Check if the stack is empty
int IsEmpty() {
    return top == -1;
}

// Print all elements of the stack
void print() {
    if (top == -1) { // Check if stack is empty
        printf("Stack is empty.\n");
    } else {
        printf("Stack: ");
        for (int i = 0; i <= top; i++) { // Print each element
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;

    do {
        // Display menu options
    printf("-------Menu------\n");
    printf("1 : Push element in stack\n");
    printf("2 : Pop element from stack\n");
    printf("3 : Top element in stack\n");
    printf("4 : Check if stack is empty\n");
    printf("5 : Print elements of stack\n");
    printf("6 : Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
    push(); // Call push function
    break;

    case 2:
    pop(); // Call pop function
    break;

    case 3:
    Top(); // Display top element
    break;

    case 4:
    if (IsEmpty()) {
    printf("Stack is empty.\n");
    } else {
    printf("Stack is not empty.\n");
    }
    break;

    case 5:
    print(); // Print stack elements
    break;

    case 6:
    printf("Exiting the program...\n");
    break;

    default:
    printf("Invalid choice.\n");
    
        }
    } while (choice != 6); // Repeat until exit option is chosen

    return 0;
}
