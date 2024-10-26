//Implement queue using linked lists

#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *front = 0;
struct node *rear = 0;

//create new node
struct node *createnode()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter value for new node: ");
    scanf("%d",&newnode ->data);
    newnode->next = 0;
    return newnode;
}

//function to create enqueue operation
void enqueue()
{
    struct node *newnode;
    newnode = createnode();

    if(rear == 0)
    {
        front=rear=newnode;
    }
    else
    {
        rear ->next =newnode;
        rear = newnode;
    }
}

//function to create dequeue operation
void dequeue()
{
    if(front == 0)
    {
        printf("there is no element to deueue.\n");
    }
    else
    {
        struct node *temp=front;
        printf("Dequeued element: %d\n",temp ->data);
        temp = temp->next;
        free(temp);
    }
       
}

//function to display operation
void display()
{
     if(front == 0)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        struct node *temp;
        temp = front;
        printf("QUEUE: ");
        while(temp != 0)
        {
            printf("%d ",temp-> data);
            temp = temp->next;
        }
    }
}

//main function 
int main()
{
    int choice;

    printf("1.ENQUEUE\n");
    printf("2.DEQUEUE\n");
    printf("3.DISPLAY\n");
    printf("4.EXIT\n");

    while(1)
    {
        printf("Enter your choice: ");
        scanf("%d",&choice);  //get choice from user.

        switch(choice) //switch case to perform particular operation.
        {
            case 1:
            enqueue();
            break;

            case 2:
            dequeue();
            break;

            case 3:
            display();
            break;

            case 4:
            return 0;
            break;  


            default :
            printf("INVALID CHOICE!!!\n");
        }
    }
} 