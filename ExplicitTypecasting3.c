//Explicit Typecasting

#include<stdio.h>
#include<stdlib.h>
    int main()
    {
        int a=5 , b=10 ;
        int sum=a+b ;
        char chart[20];

        
        itoa(sum , chart , 10);//long to string
        printf("\n%s is the sum of entered values",chart);

        int num;
        num = atoi(chart);//string to int
        printf("\n%d is the sum of entered values",num);
    
        return 0;
    }
 