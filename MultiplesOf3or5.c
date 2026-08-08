#include<stdio.h>
    int main()
    {
        //sum of all the multiopes of 3 or 5 below 1000
        
        int c;
       
        int sum=0;

        for(c=1;c<=1000;c++){

        if(c%3==0 || c%5==0){
            sum = sum+c;
        }
    }
    printf("%d",sum);
    
        return 0 ;
    }
 