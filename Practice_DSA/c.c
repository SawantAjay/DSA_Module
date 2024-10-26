#include<stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

//check if full

int IsFull(){

    return ((rear +1) %SIZE == front);
}

// check if empty
int IsEmpty(){

    return front == -1;
}

// function to insert elements to queue.
void enqueue(int value){

    if(IsFull()){
        printf("Queue is full.\n");
    }
    else{
        if(front == -1){
            front =0;
        }
        rear = (rear +1) % SIZE;
        queue[rear] = value;
        printf("Inserted %d to the queue.\n", value);
    }
}

//fun. to Remove element from queue

void dequeue(){
    if(IsEmpty()){

        printf("No elements for dequeue.\n");
    }
    else{

        int element ;
        element = queue[front];

        if(front == rear){

            front = -1;
            rear = -1;
        }
        else{
        front = (front + 1 ) % SIZE;
        }
        printf("Dequeued %d from queue.\n", element);
    }
}

// fun. to get front element from queue.

int peek(){
    if(IsEmpty()){
        printf("Queue is empty.\n");
    }
    else{

        return queue[front];
    }
}

//fun. to display all elements in the queue

void display(){

    if(IsEmpty()){

        printf("Queue is empty.\n");
    }
    else{
        int i;
        printf("All queues elements are : ");

        for(i= front; i != rear; i=(i+1) % SIZE){

            printf("%d ", queue[i]);
        }
        printf("%d\n",queue[i]);
    }
}


int main(){
    int choice,value;

    do{

        printf("****MENU****\n");
        printf("1. Enqueue element to the queue\n");
        printf("2. Dequeue element from the queue\n");
        printf("3. Check queue is empty or not?\n");
        printf("4. Check queue is full or not?\n");
        printf("5. Print all queues elements.\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice){

            case 1:
            printf("Enqueue the element to queue: ");
            scanf("%d",&value);
            enqueue(value);
            break;

            case 2: 
            dequeue();
            break;

            case 3:

            if(IsEmpty()){

            printf("Queue is empty.\n");
            }
            else{
                printf("Queue is not empty.\n");
            }
            break;

            case 4:
            if(IsFull()){

                printf("Queue is full.\n");
            }
            else{
                printf("Queue is not full.\n");
            }
            break;

            case 5:
            display();
            break;

            case 6:
            printf("exiting the program.\n");
            break;

            default :

            printf("Invalid choice !\n");
        }
    }while(choice != 6);
    return 0;
}