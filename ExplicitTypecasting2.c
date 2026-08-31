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

        long num;
        num = atol(chart);//string to long
        printf("\n%ld is the sum of entered values",num);
    
        return 0;
    }
 