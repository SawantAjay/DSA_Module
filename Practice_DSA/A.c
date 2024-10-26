//Practice

/*#include<stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;
int x;

void push(){

    if(top == MAX - 1){

        printf("Array is full \n");
}   else {
            
            printf("Enter elements to push in the stack: \n ");
            scanf("%d" , &x);
            top ++;
            stack[top] = x;
}
}

void pop (){
    if(top == -1){
        printf("There is no element to pop.\n");
    }else{
        printf("%d popped from the stack.\n");
        top--;
    }
}
 int IsEmpty(){
    return top == -1;
 }

void Top(){
    if(top == -1){
        printf("stack is empty.\n");

    }else{
        printf("Top most element of the stack is: %d\n", stack[top]);
    }
}
 void print(){
    if(top == -1){
        printf("stack is empty.\n");
    }
    else{
        printf("stack: ");
        for(int i=0; i<top; i++){
            printf("%d", stack[i]);
        }
        printf("\n");
    }
 }

 int main(){
    int choice;

    do{
        printf("******MENU******\n");
        printf("1.Push the elemnt in the stack.\n");
        printf("2.pop elements from stack.\n");
        printf("3.check the stack is empty.\n");
        printf("4.Top element in the stack.\n");
        printf("5.Print the element in the stack.\n");
        printf("6.*******Exit******\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){

            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            if(IsEmpty())

            {
            printf("stack is empty.\n");
            }
            else
            {
             printf("stack is not empty.\n");
            }

            case 4:
            Top();
            break;

            case 5:
            print();
            break;

            case 6 :
            printf("Exiting the program.....\n");
            break;

            default :
            printf("Invalid choice !!!\n");
        } 
    }while(choice != 6);
        return 0;
 }*/


#include <stdio.h>
#define MAX 10

int stack[MAX];
int top = -1;
int x;

void push(){
    if(top == MAX - 1){

        printf("Stack is full\n");
    }
    else{
        printf("push elements in the stack\n");
        scanf("%d" , &x);
        top ++;
        stack[top] = x;
    }
}

void pop (){

    if(top == -1){

        printf("no element for pop.\n");
    }
    else{
        printf(" %d popped element from the stack: \n", stack[top]);
        top -- ;
    }
}

void Top(){

    if(top == -1){

        printf("stack is empty.\n");
    }
    else{
        printf("Top element in the stack is : %d\n",stack[top]);

    }
}

int IsEmpty(){

    return top == -1;
}

void print(){
    if(top == -1){
        printf("No element to print in the stack.\n");
    }
    else {
        printf("stack Elements: ");
        for(int i=0 ; i<=top ; i++){
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main (){

    int choice;
    do{
        printf("******Menu*******\n");
        printf("1.Push elements in the stack.\n");
        printf("2.Pop elements from the stack.\n");
        printf("3.Top most element in the stack.\n");
        printf("4.check the stack is empty?\n");
        printf("5.Print the stack.\n");
        printf("6.Exit.\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){

            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            Top();
            break;

            case 4:
            if(IsEmpty())
            {
                printf("stack is empty.\n");
            }
            else
            {
                printf("stack is not empty.\n");
            }
            break;
            

            case 5:
            print();
            break;

            case 6:
            printf("Exiting the program....\n");
            break;

            default: 
            printf("Invalid choice.\n");
        }
    }while(choice != 6);

    return 0;
}

