//To check the number is palidrome or not

#include<stdio.h>
    int main(){
        int a;
        int rev=0 , rem , original;
        printf("Enter a number :- ");
        scanf("%d",&a);

        original = a;//to store the original value of number

        while(a!=0){
            rem=a%10;//to get last digit
            rev=rev*10+rem;//to reverse the number
            a=a/10;//to leave last digit
        }
        if(rev == original)
        printf("\n %d is palidrome",rev);

        else
        {
            printf("\n %d is not palidrome",rev);
        }

        return 0;

    }