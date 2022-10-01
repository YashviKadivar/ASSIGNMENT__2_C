/*  Write a program to check whether the given number is even or odd using a bitwise
    operator.   */

#include<stdio.h>

int main()
{
   int n;

   printf("\n Enter a value->");
   scanf("%d",&n);

   n & 1 ? printf("odd") : printf("even");

   return 0;
}
