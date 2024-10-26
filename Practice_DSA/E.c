#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;

};
struct node *start=0; //globally declared.

struct node *createnode()
{
    struct node *h1;
   h1 = (struct node *) malloc(sizeof(struct node));
   printf("Enter a data: ");
   scanf("%d",&h1 ->data );
   h1->next = 0;
   return h1;
}

void insertstart()
{
struct node *k1;

k1=createnode();
if(start == 0){

    start = k1;
}
else
{
k1 -> next = start;
start = k1;
}
}

insertend()
{

}

insertmiddle()
{

}

deletestart()
{

}

deleteend()
{

}

deletemiddle()
{

}

struct node *display()
{

struct node *j1;

j1 = start;
while( j1 != 0)
{
printf("%d -> ", j1 -> data);
j1 = j1 -> next;
}
}

void main(){

    int ch;

    printf("     ***MENU***\n");
    printf("1.Insertion from start\n");
    printf("2.Insertion from end\n");
    printf("3.Insertion from middle\n");
    printf("4.Deletion from start\n");
    printf("5.Deletion from end\n");
    printf("6.Deletion from middle\n");
    printf("7.Display\n");
    printf("8.Exit\n");

while(1){

    printf("Enter your choice: ");
    scanf(" %d",&ch);

    switch(ch){

    case 1:
    {
    insertstart();
    break;
    }
    case 2:
    {
    insertend();
    break;
    }
    case 3:
    {
    insertmiddle();
    break;
    }
    case 4:
    {
    deletestart();
    break;
    }
    case 5:
    {
    deleteend();
    break;
    }
    case 6:
    {
    deletemiddle();
    }
    case 7:
    {
    display();
    break;
    }
    case 8:
    {
    exit (0);
    break;
    }
    default:
    {
    printf("Wrong Input\n");
    }
    }
}
}