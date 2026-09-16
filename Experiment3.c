/*Experiment 3: Menu-Driven Program Using User-Defined Functions
Write a menu-driven C program using user-defined functions to perform the following operations on an integer:
1.	Check whether the number is even or odd 
2.	Check whether the number is prime 
3.	Check whether the number is a palindrome 
4.	Find the sum of digits 
5.	Reverse the number 
6.	Exit */

#include<stdio.h>
    void evenOdd(int);
    void prime(int);
    void palindrome(int);
    void sumDigits(int);
    void reverse(int);
    int main()
    {
        int a ;
        int choice;
        do{
            printf("----MENU----\n");
            printf("1. Even or Odd\n");
            printf("2. Prime\n");
            printf("3. Palindrome\n");
            printf("4. Sum\n");
            printf("5. Reverse\n");
            printf("6. Exit\n");

            printf("Enter your choice :- ");
            scanf("%d",&choice);

            if(choice == 6)
            {
                break;
            }

            printf("Enter the number :- ");
                scanf("%d",&a);

            switch(choice){
                case 1:
                evenOdd(a);
                break;

                case 2:
                prime(a);
                break;

                case 3: 
                palindrome(a);
                break;

                case 4:
                sumDigits(a);
                break;

                case 5:
                reverse(a);
                break;
            }
        }while(choice!=6);
    }

    void evenOdd(int a)
    {
        if(a%2 == 0){
            printf("%d is even\n",a);
        }
        else{
            printf("%d is odd\n",a);
        }
    }

    void prime(int a)
    {
        int i;
        if(a<=1){
            printf("%d is prime",a);
        }
        for(i=2 ; i <= a/2 ; i++){
            if(a%i == 0){
                printf("%d is not prime",a);
                break;
            }
            else{
                printf("%d is prime",a);
            }
        }
    }

    void palindrome(int a)
    {
        int rev=0 , rem , original=a;

        while(a!=0){
            rem=a%10;//to get last digit
            rev=rev*10+rem;//to reverse the number
            a=a/10;//to leave last digit
        }
        if(original == rev)
        printf("\n %d is palidrome\n",original);

        else
        {
            printf("\n %d is not palidrome\n",original);
        }
    }

    void sumDigits(int a)
    {
        int sum=0 , rem ;
        while(a!=0)
        {
        rem=a%10;
        sum=sum+rem;
        a=a/10;
        }
        printf("%d is the sum of %d",sum,a);
    }

    void reverse(int a)
    {
        int rev=0 , rem ;
        while(a!=0){
            rem=a%10;//to get last digit
            rev=rev*10+rem;//to reverse the number
            a=a/10;//to leave last digit
        }

            printf("The revers eof %d is %d\n",a,rev);
    }

