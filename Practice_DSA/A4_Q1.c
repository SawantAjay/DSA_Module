/*Implement doubly linked list operations */

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *start = 0;

struct node *createnode()
{
    struct node *A1;
    A1 = (struct node *) malloc(sizeof(struct node));
    printf("Enter a data: ");
    scanf("%d",&A1->data);
    A1->next = 0;
    A1->prev = 0;

    return A1;
}

struct node insertstart()
{
    struct node *A1;
    A1 = createnode();

    if(start == 0)
    {
        start = A1;
    }
    else 
    {
        A1->next = start;
        start -> prev = A1;
            start = A1;
    }
}

struct node *insertend()
{
struct node *A1,*F1;

A1=createnode();

if(start == 0)
{
    start = A1;
}
else
{
    F1 = start;
    while(F1->next !=0)
    {
        F1 = F1->next;
        F1->next = A1;
        A1->prev=F1;
    }

}
}


struct node *insertmiddle()
{

}


struct node *deletestart()
{
    struct node *A1;

    if(start == 0)
    {
        printf("there is no element to print!");
    }
    else
    {
        A1 = start;
        start = start ->next;
        start ->prev = 0;
        A1->next = 0;
        free(A1);
    }
}

struct node *deleteend()
{

}

struct node *deletemiddle()
{

}

void display()
{
    struct node *A1;
    A1 = start;
    if(start == 0)
    {
        printf("There is no elements to print!\n");
    }
    else
    {
        while(A1->next != 0)
        {
            printf("%d-> ",A1->data);
            A1 = A1 -> next;
        }
        while(A1->prev != 0)
        {
            printf("%d <-",A1->data);
            A1 = A1->prev;
        }
    }
}

void main()
{
    int ch;

    printf("1.Insert start\n");
    printf("2.Insert end\n");
    printf("3.Insert middle\n");
    printf("4.Delete start\n");
    printf("5.Delete end\n");
    printf("6.Delete middle\n");
    printf("7.Display\n");
    printf("8.Exit\n");

    while(1){

    printf("Enter your choice: ");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:
    insertstart();
    break;

    case 2:
    insertend();
    break;

    case 3:
    deletemiddle();
    break;

    case 4:
    deletestart();
    break;

    case 5:
    deleteend();
    break;

    case 6:
    deletemiddle();
    break;

    case 7:
    display();
    break;

    case 8:
    exit(0);
    break;

    default:
    printf("Invalid choice!");
}
}
}