#include<stdio.h>

    int main()
    {
        int a;
        int sum=0;
        int rem;

        printf("Enter a number ",a);
        scanf("%d",&a);
        while(a!=0)
        {
        rem=a%10;
        sum=sum+rem;
        a=a/10;
        }
        printf("%d",sum);

    }
