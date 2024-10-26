/*Implement selection sort*/

#include<stdio.h>

void main()
{
    int n;
    int a[100];

    int min,index,temp;

    printf("Enter a range: ");
    scanf("%d",&n);

    printf("Enter %d numbers: ",n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    //loop for steps or iteration

    for(int p=0; p<n-1; p++){

        min = a[p];
        index = p;

        for(int s=p+1; s<n; s++){

            if(min > a[s] )
            {
                min = a[s];
                index = s;
            }
        }
                temp = a[p]; //swapping 
                a[p] = a[index];
                a[index] = temp;
    }
    
        printf("After sorting: ");  //printf data after sorting.
        for(int p=0; p<n; p++)
        {
            printf("%d ",a[p]);
        }
}