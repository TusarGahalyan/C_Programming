//C program to implement all the bitwise operators in C

#include<stdio.h>
    int main()
    {
        int a , b ;
        printf("Enter the value of a and b :- ");
        scanf("%d%d",&a,&b); 
        
        printf("\na & b = %d",a & b);
        printf("\na | b = %d",a | b);
        printf("\na ^ b = %d",a ^ b);
        printf("\n~a = %d",~a);
        printf("\na >> b = %d",a >> b);
        printf("\na << b = %d",a << b);
        
        return 0;

    }
