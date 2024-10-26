//Practice --> implement queues using array 

#include<stdio.h>
#define MAX 5

int queue[MAX];

int front = -1;
int rear = -1;
int x;

int IsFull(){

    return (rear == MAX - 1);
}

int IsEmpty(){

    return front == -1;
}

void Enqueue (int value){

    if (IsFull())
    {
        printf("Queue is full.\n");
    }
    else {

        if(front == -1){
            front = 0;
            rear ++;
            queue[rear] = value;
            printf("%d enqueued to the queue.\n");
        }
    }
}

void dequeue(){

    if(IsEmpty()){

        printf("Queue is empty.\n");
    }
    else{
        printf("%d dequeued from queue.\n", queue[front]);
        front ++;
    }
}

void display(){

    if(IsEmpty()){

        printf("Queue is empty.\n");
    }
    else{
        printf("Queues elements are: \n");
        for (int i = front; i<=rear; i++){

            printf("%d", queue[i]);
        }
    }printf("\n");    
}


int main(){

    int choice ,value;

    while(choice != 6){

        printf("***MENU***\n");
        printf("1.Enqueue\n");
        printf("2.dequeue\n");
        printf("3.display\n");
        printf("4.check if queue is full? \n");
        printf("5.check if queue is empty? \n");
        printf("6.Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            printf("Enter value to Enqueue: ");
            scanf("%d", value);
            Enqueue(value);
            break;

            case 2:
            dequeue();
            break;

            case 3:
            display();
            break;

            case 4:
             if (IsFull())

                {
                printf("Queue is full.\n");
                }
                else 
                {
                printf("Queue is not full.\n");    
             } break;

             case 5:
             if(IsEmpty())
             {
                printf("Queue is empty.\n");
             }
             else
             {
                printf("Queue is not empty.\n");
             }break;

             case 6:
             printf("Exting the program....\n");
             break;

             default :
             printf("Invalid choice!\n");
    }
    return 0;
}
}