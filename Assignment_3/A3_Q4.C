//Write a program to insert a new node after nth node. 

#include<stdio.h>
#include<stdlib.h>

// Definition of the node structure
struct node {
    int data;
    struct node *next;
};

// Start pointer for the linked list
struct node *start = NULL;

// Function to create a new node
struct node *createNode() {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
       
    printf("Enter data: ");
    scanf("%d", &newNode->data);

    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the list
void insertEnd() {
    struct node *newNode = createNode();

    if (start == NULL) {
        start = newNode;  // If list is empty, the new node becomes the start node
    } else {
        struct node *temp = start;
        while (temp->next != NULL) {
            temp = temp->next;  // Traverse to the last node
        }
        temp->next = newNode;  // Insert at the end
    }
}

// Function to insert a new node after the nth node
void insertAfterNthNode(int n) {
    struct node *newNode = createNode();  // Create the new node
    struct node *temp = start;

    // Traverse to the nth node
    for (int i = 1; i < n; i++) {
        if (temp == NULL) {
            printf("There are fewer than %d nodes in the list\n", n);
            return;
        }
        temp = temp->next;
    }

    // Insert the new node after the nth node
    if (temp != NULL) {
        newNode->next = temp->next;
        temp->next = newNode;
        printf("Node inserted after node %d\n", n);
    } else {
        printf("Invalid position!\n");
    }
}

// Function to display the linked list
void display() {
    struct node *temp = start;

    if (temp == NULL) {
        printf("The list is empty\n");
        return;
    }

    printf("Linked list: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    
}

// Main function to handle menu choices
int main() {
    int choice, n;

    printf("\n1. Insert at end");
    printf("\n2. Insert after nth node");
    printf("\n3. Display");
    printf("\n4. Exit\n");

    while (1) {
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
    insertEnd();  // Insert a node at the end of the list
    break;

    case 2:
    printf("Enter the position after which you want to insert: ");
    scanf("%d", &n);
    insertAfterNthNode(n);  // Insert after the nth node
    break;

    case 3:
    display();  // Display the linked list
    break;

    case 4:
    exit(0);  // Exit the program

    default:
    printf("Invalid choice!\n");
    }
    }

    return 0;
}