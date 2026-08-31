//Even and odd elements in array

#include<stdio.h>
    int main()
    {
        int i;
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

        printf("\nEven elements :- ");
        for(i=0 ; i<10 ; i++)
        {
        if(arr[i]%2 == 0)
        {
            printf("\n%d",arr[i]);
        }
        }

        printf("\nOdd elements :- ");
        for(i=0 ; i<10 ; i++)
        {
        if(arr[i]%2 != 0)
        {
            printf("\n%d",arr[i]);
        }
        }
        return 0;
    }