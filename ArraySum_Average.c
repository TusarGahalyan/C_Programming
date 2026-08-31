//Array sum and average

#include<stdio.h>
    int main()
    {
        int i , sum=0 , avg;
        int arr[10];
        printf("Enter the values of arrays :- ");

        for(i=0 ; i<10 ; i++)
        {
            scanf("%d",&arr[i]);//enter values of elements

        }
        printf("These are the values of array elements :- ");

        for(i=0 ; i<10 ; i++)
        {
        printf("%d\n",arr[i]);//print array elements
        }
        printf("\nThis is the sum of array elements :- ");

        for(i=0 ; i<10 ; i++)
        {
        sum = sum+arr[i];//sum of array elements
        }
        printf("%d",sum);

        printf("\nThis is the average of array elements :- ");
        for(i=0 ; i<10 ; i++)
        {
        avg = sum/10;//average of elements
        }
        printf("%d",avg);

        return 0;
    }