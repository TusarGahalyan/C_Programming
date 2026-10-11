//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include<stdio.h>
    int main(){
        int a , i , k ;
        prinf("Enter the size of array :- ");
        scanf("%d",&a);

        int arr[a];
        printf("Enter the elements of array :- ");
        for(i=0 ; i<a ; i++){
        scanf("%d",&arr[i]);
        }

        printf("Enter the value of k(size of sub-arrays) :- ");
        scanf("%d",&k);

        if (k > a) {
        printf("Subarray size k cannot be larger than array size.\n");
        return 0;
        }

        int sum = 0;
        for (i = 0; i < k; i++) {
            sum += arr[i];
        }

        int maxSum = sum;
        for (i = k; i < a; i++) {
            sum = sum - arr[i - k] + arr[i]; 
            if (sum > maxSum) {
                maxSum = sum;
            }
        }

        printf("Maximum sum of subarrays of size %d is: %d\n", k, maxSum);

        return 0;
    }