/*Q.2 Develop an algorithm and draw a flowchart that accepts a positive integer and displays all its
even digits along with their positions, the sum of the even digits, and the total count of even
digits. Count positions from left to right, considering the leftmost digit as position 1. Consider
0 an even digit.
Example, if input = 13452 then the output should be
Digit = 4, Position = 3
Digit = 2, Position = 5
Sum of even digits = 6
Total count of even digits = 2 */

#include<stdio.h>
int main(){
int n,rev=0,length=0,rem,i=1;
int even_count=0,sum=0;
printf("Enter No\n");
scanf("%d",&n);
while(n!=0){
rem=n%10;
rev=rev*10+rem;
n=n/10;
length++;
}
while(rev!=0)
{
rem=rev%10;
if(rem%2==0)
{
printf("Digit=%d,Position=%d\n",rem,i);
sum=sum+rem;
even_count++;
}
 i++;
 rev=rev/10;
}
printf("Sum of even digits=%d\n",sum);
printf("Total count of even digits=%d\n",even_count);
return 0;
}

