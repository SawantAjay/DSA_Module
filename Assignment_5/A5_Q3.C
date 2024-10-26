/*Implement bubble sort */

#include<stdio.h>


void Bubble_sort(int a[], int n) //sorting fun.
{
int i,j,temp;

for(int i=0; i<n; i++){

    for(j=0; j<n-i-1; j++){

        if(a[j] > a[j+1])
        {
            temp = a[j+1];
            a[j+1] = a[j];
            a[j] = temp;
        }
    }
}
printf("After sorting: ");

for(int i=0; i<n; i++){

    printf("%d ",a[i]);
}
}

//main function 
int main()
{
    int n;

    int a[100];
    printf("Enter a range: ");
    scanf("%d",&n);

    printf("Enter %d numbers: ",n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    Bubble_sort(a,n); //call the function.

}