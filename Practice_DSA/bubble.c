#include<stdio.h>


void Bubble_sort(int a[], int n)
{
    int temp,i,j;
for(int i=0 ; i<n; i++){

    for(int j=0 ; j<n-i-1 ; j++)
    {
        if(a[j] > a[j+1])
        {
            temp = a[j+1];
           a[j+1] = a[j];
             a[j] = temp;   

        }
    }
}
printf("After sorting: \n");
for(int i=0; i<n ; i++)
{
    printf("%d ",a[i]);
}
}
void main()
{
    int n;

    int a[100];
    printf("Enter range: ");
    scanf("%d",&n);

printf("Enter %d numbers: ",n);
for(int i=0; i<n; i++)
{
    scanf("%d",&a[i]);
}

Bubble_sort(a,n);

}