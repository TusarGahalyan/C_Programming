//Q108: Write a Program to take an integer array nums. 
//Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. 
//The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

#include<stdio.h>
    int main(){
        int a , i ;
        printf("Enter the size of array :- ");
        scanf("%d",&a);

        int nums[a];
        printf("Enter the elements of array :- ");
        for(i=0 ; i<a ; i++){
            scanf("%d",&nums[i]);
        }

        int prefix[a];
        prefix[0] = 1;
        for(i=1 ; i<a ; i++){
            prefix[i] = prefix[i-1] * nums[i-1];
        }

        int suffix[a];
        suffix[a-1] = 1;
        for(i=a-2 ; i>=0 ; i--){
            suffix[i] = suffix[i+1] * nums[i+1];
        }

        int answer[a];
        for(i=0 ; i<a ; i++){
            answer[i] = prefix[i] * suffix[i];
        }

        printf("Answer array is given by :- ");
        for(i=0 ; i<a ; i++){
            printf("%d",answer[i]);
            if(i<a-1)printf(", ");
        }
        return 0;
    }