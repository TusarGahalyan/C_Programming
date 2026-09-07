//Deletion of elements in array

#include<stdio.h>
    int main()
    {
        int a , n , i , position , u ;
        printf("Enter the size of array :- ");
        scanf("%d",&a);

        printf("Number of total elements you want to insert in array initially :- ");
        scanf("%d",&n);

        printf("Enter the position from which you want to delete an element :- ");
        scanf("%d",&position);

        int arr[a];
        printf("Enter the elements of array :- ");
        for(i=0 ; i<n ; i++)
        {
        scanf("%d",&arr[i]);
        }
    
        for(i=position-1 ; i<n-1 ; i++)
        {
            arr[i]=arr[i+1];
        }
        
        printf("These are the elements of array arter deletion :- ");
        
        for(i=0 ; i<n-1 ; i++)
        {
        printf(" %d",arr[i]);
        }

        return 0;

    }