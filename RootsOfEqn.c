#include<stdio.h>
#include<math.h>

	int main()
	{
	int d;
	int a,b,c;
	int r1,r2,r3,r4;
	printf("This is the given equation :- ax<sup>2</sup>+bx+c=o\n");
	printf("Now enter the values of a, b, c to find the value of determinant\n");
	scanf("%d%d%d",&a,&b,&c);
	
	d=b*b - 4*a*c;
	printf("%d\n",d);

	if(d>0){
		r1 = (-b + sqrt(d))/(2*a);
		r2 = (-b - sqrt(d))/(2*a);
		printf("The roots are real and different %d %d",r1,r2);
	}
	else if(d==0){
		r3 = -b/2*a;
		 
		printf("The roots are real and same %d",r3);
	}
	else{
		r4 = sqrt(-d)/2*a;
		printf("The roots are imaginary %d",r4);
	}
	
	return 0;
	}
	
	