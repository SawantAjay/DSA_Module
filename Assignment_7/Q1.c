//Implement stack using linked lists

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top = NULL;

//Create a new node
struct node *createnode() {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value for new node: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    return newnode;
}

//Check if stack is empty
int isEmpty() {
    return top == NULL;
}

//Push element onto stack
void push() {
    struct node *newnode = createnode();
    newnode->next = top;
    top = newnode;
}

//Pop element from stack
void pop() {
    if (isEmpty()) {
        printf("No elements to pop.\n");
    } else {
        struct node *temp = top;
        printf("Popped element: %d\n", top->data);
        top = top->next;
        free(temp);
    }
}

//Display stack elements
void display() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
    } else {
        struct node *temp = top;
        printf("Stack: ");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

//main function 
int main() {

int choice;

while (1) {

printf("1.CHECK IF STACK IS EMPTY\n");
printf("2.PUSH\n");
printf("3.POP\n");
printf("4.DISPLAY\n");
printf("5.EXIT\n");

printf("Enter your choice: ");
scanf("%d", &choice);

  switch (choice) {  //switch case to perform particular operation.

    case 1:
    if (isEmpty())
    {
    printf("Stack is empty.\n");
    } else
    {
    printf("Stack is not empty.\n");
    }
    break;

    case 2:
    push();
    break;

    case 3:
    pop();
    break;

    case 4:
    display();
    break;

    case 5:
    return 0;

    default:
    printf("Invalid choice!\n");
}
}
}
