/*Experiment 1: Array Operations Using Functions
Write a C program to implement the following functions for an integer array:
1.	findMaximum() – Find the largest element. 
2.	findMinimum() – Find the smallest element. 
3.	calculateSum() – Calculate the sum of all elements. 
4.	calculateAverage() – Calculate the average of the elements. 
Accept the array elements from the user and display all the results.*/

#include<stdio.h>
    int findMaximum(int arr[] , int a);
    int findMinimum(int arr[] , int a);
    int calculateSum(int arr[] , int a);
    float calculateAverage(int arr[] , int a);

    int main()
    {
        int a , i , max=0 ;
        printf("Enter the size of array :- ");
        scanf("%d",&a);
        
        int arr[a];
        printf("Enter the elements of array :- ");
        for(i=0 ; i<a ; i++){
            scanf("%d",&arr[i]);
        }

        printf("The largest element is %d\n",findMaximum(arr , a));
        printf("The smallest element is %d\n",findMinimum(arr , a));
        printf("The sum of elements is %d\n",calculateSum(arr , a));
        printf("The average of elements is %f\n",calculateAverage(arr , a));

        return 0;
    }

    int findMaximum(int arr[] , int a){
        int i ;
        int max=arr[0];
        for(i=0 ; i<a ; i++){
            if(arr[i] > max) {
                max = arr[i];
            }
        }return max;
    }

    int findMinimum(int arr[] , int a){
        int i ;
        int min=arr[0];
        for(i=0 ; i<a ; i++){
            if(arr[i] < min) {
                min = arr[i];
            }
        }return min;
    }

    int calculateSum(int arr[] , int a){
        int i ;
        int sum=0;
        for(i=0 ; i<a ; i++){
            sum = sum+arr[i];
            }
        return sum;
    }

    float calculateAverage(int arr[] , int a){
        int sum = calculateSum(arr , a);
        return (float)sum / a;
    }