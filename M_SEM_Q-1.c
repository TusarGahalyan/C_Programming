/*Q.1 Write a C program that accepts an integer from 8 to 15 (both 8 and 15 are inclusive).
Considering its 4-bit binary representation, toggle the bits at positions 2 and 3, and display the
resulting value in decimal. Count bit positions from left to right, with the most significant bit
(leftmost bit) as position 1.*/

#include<stdio.h>
int main(void){
int a;
printf("Enter the number between 8 to 15\n");
scanf("%d", &a);
printf("%d", a^6);//mask 0110

return 0;
}