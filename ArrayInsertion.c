//Insertion of elements in array

#include<stdio.h>
    int main()
    {
        int a , n , i , position , u ;
        printf("Enter the size of array :- ");
        scanf("%d",&a);

        printf("Number of total elements you want to insert in array :- ");
        scanf("%d",&n);

        printf("Enter the position at which you want to insert an element :- ");
        scanf("%d",&position);

        printf("Enter the element you want to insert :- ");
        scanf("%d",&u);

        int arr[a];
        printf("Enter the elements of array :- ");
        for(i=0 ; i<n ; i++)
        {
        scanf("%d",&arr[i]);
        }

        if(n == a)
        {
            printf("No element can pe inserted");
        }

        else
        {
            for(i=n ; i>=position-1 ; i--)
            {
                arr[i]=arr[i-1];
            }
        }
        arr[position-1]=u;
        printf("These are the elements of array arter insertion :- ");
        
        for(i=0 ; i<n+1 ; i++)
        {
        printf(" %d",arr[i]);
        }

        return 0;

    }