/*#include<stdio.h>
#include<stdlib.h>

int value,n;

struct node{

    int data;
    struct node* next;
};

//fun. create new node

struct node* createnode(int data){

    struct node* newnode= (struct node*) malloc(sizeof(struct node));

    newnode -> data =data;  //assigns the given value to the data field of the node.
    newnode -> next =NULL;  //makes sure this node doesn’t point to any other node yet, marking it as the last node for now.

    return newnode;
}


//fun. create linked list

struct node* createlinkedlist(int n){  /*It returns a pointer to a struct node, which will be the head of the linked list. The function takes an integer n as an argument, representing the number of nodes to create.*/

    /*struct node* head = NULL; 
    struct node* temp = NULL;

    for(int i=1; i<=n; i++){

    printf("Enter value for node %d :", i);
    scanf("%d",&value);

    struct node* newnode = createnode(value);

    if(temp == NULL){           //temp is used to keep track of the last node added to the list.

        head =newnode;
        temp =newnode;
    }
    else{

        temp -> next = newnode;  //link the 1st node to the new node 
        temp = newnode;            //stores in temp var
    }
        
    }
    return head;
}

//fun. to printing linked list

void printLinkedList(struct node* head)
{

    struct node* temp = head;

    printf("Linked list: ");

    while( temp != NULL){

    printf("%d ->", temp -> data);

    temp = temp -> next;
}
    printf("NULL\n");
}

int main()
{

    int n;

    printf("Enter the number of nodes: ");
    scanf("%d",&n);

    struct node* head = createlinkedlist(n);
    printLinkedList(head);

    return 0;
}*/

/*#include<stdio.h>
#include<stdlib.h>


struct node{

    int data;
    struct node* next;
};

struct node* createnode(int data){

    struct node* newnode = (struct node*) malloc(sizeof(struct node));

    newnode -> data = data;
    newnode -> next = NULL;

   return newnode;
}

struct node* createlinkedlist(int n){
    
    int value;

    struct node* head = NULL;
    struct node* temp = NULL;

    for (int i = 1; i<=n; i++){

    printf("Enter value for node %d: ", i);
    scanf("%d",&value);

    struct node* newnode = createnode(value);

    if(head == NULL){

    head = newnode;
    temp = newnode;
        
    }
    else
    {
    temp ->next = newnode;
    temp = newnode;
    }
}
return head;
}

void print(struct node* head){
    
    struct node* temp =head;  // start from the head

    printf("Linked list: ");

    while( temp != NULL){

    printf("%d ->", temp->data);

    temp = temp->next;
}
    printf("NULL\n");
}

int main(){

    int n ;

    printf("Enter the number of node: ");
    scanf("%d", &n);

    struct node* head = createlinkedlist(n);
    print(head);

    return 0;
}*/

#include<stdio.h>
#include<stdlib.h>

struct node{

    int data;
    struct node* next;
};

//fun. to create new node

struct node* createnode(int data){

    struct node* newnode ;
    newnode = (struct node*) malloc(sizeof(struct node));

    newnode -> data = data;
    newnode -> next = NULL;

    return newnode;
}

// fun. to create linked list

struct node* createlinkedlist(int n){
    int value;

    struct node* head = NULL;
    struct node* temp = NULL;

    for(int i=1 ; i<=n; i++ ){

    printf("Enter the value for node %d: ",i);
    scanf("%d",&value);

    struct node* newnode = createnode(value);

    if(head == NULL){

        head = newnode;
        temp = newnode;
    }
    else {

        temp->next = newnode;
        temp = newnode;
    }

    }

        return head;
}

//fun. to print linked list

void print(struct node* head){

    struct node* temp= head;

    printf("linked list: ");

    while(temp != NULL){

    printf("%d -> ", temp -> data);

    temp = temp -> next;
    }

    printf("NULL\n");
}



int main(){

    int n;

    printf("Enter the number of nodes: ");
    scanf("%d",&n);

    struct node* head = createlinkedlist(n);
    print(head);

    return 0;
}