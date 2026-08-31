//Linear search in array

#include<stdio.h>
    int main()
    {
        int i , a , found=0 ;
        int arr[10];
        printf("Enter the values of arrays :- ");

        for(i=0 ; i<10 ; i++)
        {
            scanf("%d",&arr[i]);

        }

        for(i=0 ; i<10 ; i++)
        {
        printf("\n%d",arr[i]);
        }
        
        printf("\nEnter the element you want to search :- ");
        scanf("%d",&a);
        for(i=0 ; i<10 ; i++)
        {
            if(arr[i] == a)
            {
                printf("%d",arr[i]);
                found = 1;
                break;
            }
        }
            if(found == 0)
            {
                printf("\nElement not found");
            }
        
        return 0;
    }