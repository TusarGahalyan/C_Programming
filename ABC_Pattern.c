#include<stdio.h>
    int main()
    {
        int a=5;//number of rows
        int i;
        int j;
        char A;


    for(i=0;i<=a;i++)
    {
        for(j=0;j<=i;j++)
        {
            char r=j+'A';
            printf(" %c ",r);
        }
            printf("\n");

    }
    
    return 0;

}