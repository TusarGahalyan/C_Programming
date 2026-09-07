//Largest and Smallest element in array

#include <stdio.h>

int main() {
    int arr[10];
    int i , largest, smallest;

    printf("Enter elements of array :- ");
    for(i = 0; i < 10; i++) 
    {
        scanf("%d", &arr[i]);
    }

    largest = smallest = arr[0];   

    for(i = 1; i < 10; i++)
     {
        if(arr[i] > largest) largest = arr[i];
        if(arr[i] < smallest) smallest = arr[i];
    }

    printf("Largest = %d\nSmallest = %d\n", largest, smallest);
    return 0;
}