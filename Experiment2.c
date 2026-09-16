/*Experiment 2: Recursive Function – Factorial and Fibonacci
Write a C program to implement the following using recursive functions:
1.	factorial(n) – Calculate the factorial of a number. 
2.	fibonacci(n) – Find the nth Fibonacci number. 
Accept n from the user and display the results.
Example:
Input: 6
Factorial = 720
6th Fibonacci number = 8 */

#include<stdio.h>
    int factorial(int);
    int fibonacci(int);
    int main()
    {
        int a;
        printf("Enter the value of a :- ");
        scanf("%d",&a);

        printf("The factorial of %d is %d\n",a , factorial(a));
        printf("%dth fibonacci number :- %d",a , fibonacci(a));

        return 0;
    }

    int factorial(int a)
    {
        if(a==0 || a==1){
            return 1;
        }
        else{
            return a * factorial(a-1);
        }
    }

    int fibonacci(int a)
    {
        if(a == 0){
            return 0;
        }
        else if(a == 1){
            return 1;
        }
        else{
            return fibonacci(a-1) + fibonacci(a-2);
        }
    }


