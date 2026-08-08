#include<stdio.h>
	int main()// To find the remainder 
	{
	int a;//divident , a>b
	int b;//divisor
	
	printf("Enter value of a and b ");
	scanf("%d %d",&a,&b);
	
	int q = a/b;
	int r = a - b*q;
	printf("The remainder is given as : ");// We have the formula = divident = divisor * quotent + remainder
	printf("%d",r);//we can also write : ("the remainder when %d is divided by %d is %d",a,b,r);

	return 0;
	}	