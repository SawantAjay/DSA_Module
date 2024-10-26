/* Implement queues using Arrays */

#include <stdio.h>
#define MAX 5 // Define maximum size of the queue

int queue[MAX];
int front = -1, rear = -1; // Initialize front and rear pointers

// Check if the queue is full
int isFull() {
    return (rear == MAX - 1); // Queue is full when rear reaches max index
}

// Check if the queue is empty
int isEmpty() {
    return (front == -1 || front > rear); // Queue is empty when front is beyond rear or uninitialized
}

// Enqueue operation to add an element to the queue
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full!\n");
    } else {
        if (front == -1) front = 0; // Set front to 0 if adding the first element
        rear++;
        queue[rear] = value; // Insert element at the rear
        printf("%d enqueued to the queue.\n", value);
    }
}

// Dequeue operation to remove an element from the queue
void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
    } else {
        printf("%d dequeued from the queue.\n", queue[front]);
        front++; // Move front pointer to the next element
    }
}

// Display operation to show elements in the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
    } else {
        printf("Queue elements are: ");
        for (int i = front; i <= rear; i++) { // Loop from front to rear
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;

    
    printf("\nMenu:\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Display\n");
    printf("4. Check if Queue is Empty\n");
    printf("5. Check if Queue is Full\n");
    printf("6. Exit\n");

while (1) {

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1: // Enqueue operation
    printf("Enter value to enqueue: ");
    scanf("%d", &value);
    enqueue(value);
    break;

    case 2: // Dequeue operation
    dequeue();
    break;

    case 3: // Display queue elements
    display();
    break;

    case 4: // Check if queue is empty
    if (isEmpty()) {
    printf("Queue is empty!\n");
    } else {
    printf("Queue is not empty!\n");
    }
    
    break;
    case 5: // Check if queue is full
    if (isFull()) {
    printf("Queue is full!\n");
    } else {
    printf("Queue is not full!\n");
    }  
    break;

    case 6: // Exit the program
    return 0;

    default: // Invalid choice
    printf("Invalid choice!\n");
    }
    }
}
