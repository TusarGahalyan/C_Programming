/*Write a C program in which:
1.	A function accepts two integer numbers as parameters.
2.	The function calculates their sum and stores it in an integer variable named result.
3.	The function returns the address of result to the main() function.
4.	The main() function displays the sum using the returned address.*/

#include<stdio.h>
        int *func(int a , int b){
            static int result=0;
            result = a+b;
            return &result;

        }
        int main()
        {
            int a , b;
            int *rslt;
            printf("Enter two numbers :- ");
            scanf("%d%d",&a,&b);
            rslt = func(a , b);
            printf("Result = %d\n",*rslt);
            return 0;
        }
    