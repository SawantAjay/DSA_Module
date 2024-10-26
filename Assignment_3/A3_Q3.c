// Write a program to insert a new node at the end to the linked list.  

#include<stdio.h>
#include<stdlib.h>

// Define a structure for linked list node
struct node {
    int data;            // Data of the node
    struct node *next;   // Pointer to the next node
};

struct node *start = 0; 

// Function to create a new node with data input from the user
struct node *createnode() {
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node)); 

    printf("Enter a data: ");
    scanf("%d", &newnode->data); 

    newnode->next = 0; // Set the next pointer to NULL
    return newnode; 
}

// Function to insert a new node at the end of the linked list
void insertEnd() {
    struct node *newnode;
    newnode = createnode(); // Create a new node

    if (start == 0) { 
        start = newnode;
    } else {
        struct node *h1 = start;
        while (h1->next != 0) { 
            h1 = h1->next;
        }
        h1->next = newnode; 
    }
}

// Function to display the linked list
void display() {
    struct node *h1;
    if (start == 0) { // Check if the list is empty
        printf("\nThere is no Data !!!");
    } else {
        h1 = start; // Set the pointer to the start of the list
        printf("\nLinked List: ");
        while (h1 != 0) { // Traverse through the list
            printf("%d ", h1->data); // Print data of each node
            h1 = h1->next; // Move to the next node
        }
    }
}

int main() {
    printf("\n**********");
    printf("\n1. Press to enter data at the end of the linked list");
    printf("\n2. Press to display the linked list");
    printf("\n3. Press to Exit the Program");
    printf("\n**********\n");

    int d;
    while (1) { // Infinite loop for user interaction
        printf("\nEnter your Choice: ");
        scanf("%d", &d); // Get user choice

        switch(d) {
        case 1:
        insertEnd(); // Call function to insert at end
        break;

        case 2:
        display(); // Call function to display the list
        break;

        case 3:
        return 0; // Exit the program

        default:
        printf("Invalid Choice!!!"); // Handle invalid choices
        break;
        }
        printf("\n");
    }
}
