/*Q.5 Write a C program that accepts a 3 × 3 integer matrix from the user and uses the following
functions
a) int transposeAndCheck(int a[3][3]); Display the transpose of the matrix and return 1
if the original matrix is symmetric; otherwise, return 0. [10 Marks]
 b) void calculateSums(int a[3][3], int *rowSum, int *columnSum); Calculate the sum
of each row and each column. Store the results in the arrays pointed to by rowSum and
columnSum. [15 Marks] */

#include <stdio.h>
int transposeAndCheck(int a[3][3]);
void calculateSums(int a[3][3], int *rowSum, int *columnSum);
int main()
{
 int a[3][3];
 int i, j, result;
int sum_r = 0;
 int sum_c = 0;
 printf("Enter the elements of the 3x3 matrix:\n");
 for (i = 0; i < 3; i++)
 {
 for (j = 0; j < 3; j++)
 {
 scanf("%d", &a[i][j]);
 }
 }
 result = transposeAndCheck(a);
 if (result == 1)
 printf("The matrix is symmetric.\n");
 else
 printf("The matrix is not symmetric.\n");

 calculateSums(a, &sum_r, &sum_c);
 //printf("%d %d", sum_r, sum_c);
 return 0;
}
int transposeAndCheck(int b[3][3])
{
 int i, j;
 int symmetric = 1;
 printf("Transpose of the matrix:\n");
 for (i = 0; i < 3; i++)
 {
 for (j = 0; j < 3; j++)
 {
 printf("%d ", b[j][i]);
 if (b[i][j] != b[j][i])
 symmetric = 0;
 printf("\n");
 }
 return symmetric;
}
void calculateSums(int a[3][3], int *rowSum, int *columnSum){
 for(int i=0; i<=2; i++){
for(int j=0; j<=2; j++){
 *rowSum = *rowSum + a[i][j];
 }
printf("Sum of %d row=%d\n",i+1,*rowSum);
*rowSum=0;
 }
 for(int i=0; i<=2; i++){
 for(int j=0; j<=2; j++){
 *columnSum = *columnSum + a[j][i];//column sum
 }
printf("Sum of %d col=%d\n",i+1,*columnSum);
*columnSum=0;
 }
}