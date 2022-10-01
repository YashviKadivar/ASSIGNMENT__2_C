/* Write a program to print unit digit of a given number    */

#include<stdio.h>

int main()
{
    int n;

    printf("\n Enter a number->");
    scanf("%d",&n);

    int unit_digit=n%10;

    printf("\n %d",unit_digit);

    return 0;
}
