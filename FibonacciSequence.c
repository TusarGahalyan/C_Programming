//To print fibonacci sequence up to n numbers
#include<stdio.h>
    int main()
    {
        int a=0 , b=1 , c , i , n;
        printf("Ente rthe value of n :- ");
        scanf("%d",&n);

        for(i=0 ; i<n ; i++)
        {
        printf("%d ",a);
        c = a+b;
        a = b;
        b = c;
        }
        return 0;

    }