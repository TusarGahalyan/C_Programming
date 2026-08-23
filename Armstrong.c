//To check an armstrong number

#include<stdio.h>
#include<math.h>
    int main()
    {
        int a , digits ;
        int c=0 ;//count the digits
        int original , rem ;
        int temp , sum=0;
        printf("Enter a number :- ");
        scanf("%d",&a);

        original = a;
        temp = a;
        while(temp!=0)
        {
            temp=temp/10;
            c++;
        }
        temp = a;
        while(temp!=0)
        {
        rem = temp % 10;
        sum = sum + pow(rem, c);
        temp = temp / 10;
        }
        
        if(sum == original)
        {
            printf("\n%d is armstrong",original);
        }
        else
        {
            printf("\n%d is not armstromh",original);
        }
        return 0;
    }