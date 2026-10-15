/*Q.4 Write a C program for a one-dimensional integer array using the following functions. Call
analyseArray() before replaceDuplicates() because the latter modifies the array. Assume that
the array contains at least two distinct elements.
a) void analyseArray(int a[], int n, int *secondLargest, int *frequency); Determine
the second-largest distinct element and its frequency, and return both through pointer
parameters. Do not use an additional array. Display the returned values in main(). [15
Marks]
 b) void replaceDuplicates(int a[], int n); Retain the first occurrence of each element,
replace every subsequent occurrence with 0, and display the modified array. [10 Marks] */

#include <stdio.h>
void analyseArray(int a[], int n, int *secondLargest, int *frequency)
{
 int largest, i;
 largest = a[0];
 for (i = 1; i < n; i++)
 {
 if (a[i] > largest)
{
*secondLargest = largest;
 largest = a[i];
}
 }
 for (i = 0; i < n; i++)
 {
 if (a[i] != largest && a[i] > *secondLargest)
 *secondLargest = a[i];
 }
 *frequency = 0;
 for (i = 0; i < n; i++)
 {
    if (a[i] == *secondLargest)
 (*frequency)++;
 }
}
void replaceDuplicates(int a[], int n)
{
 int i, j, k;
 for (i = 0; i < n; i++)
 {
 for (j = i + 1; j < n; j++)
 {
 if (a[i] == a[j])
 {
 for (k = j; k < n - 1; k++)
 a[k] = a[k + 1];
a[n-1]=0;
 n--;
 j--;
 }
 }
 }
}
int main(void)
{
 int a[] = {12, 5, 8, 12, 8, 8, 5};
 int n = sizeof(a) / sizeof(a[0]);
 int secondLargest, frequency;
 analyseArray(a, n, &secondLargest, &frequency);
 printf("Second-largest distinct element = %d\n", secondLargest);
 printf("Frequency = %d\n", frequency);
replaceDuplicates(a, n);
printf("Modified array: ");
 for (int i = 0; i < n; i++)
 printf("%d ", a[i]);

 return 0;
}