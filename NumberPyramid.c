#include<stdio.h>
    int main()
        {
            int a;//number of rows
            int i;
            int j;
            int k;
            int num;

            printf("Enter the number of rows ");
            scanf("%d",&a);

            for(i=0;i<=a;i++)
            {
                for(j=0;j<=a-i;j++)
                {
                    printf(" ");
                }
                
                for(k=0;k<=i;k++)
                {
                    num=i+1;
                    printf("%d ",num);
                }
                printf("\n");
            }
            return 0;
        }
    