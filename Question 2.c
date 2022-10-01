/* Write a program to print a given number without its last digit.  */

#include<stdio.h>

int main()
{
    int n;

    printf("\n Enter a NUmber->");
    scanf("%d",&n);

    int last_digit=n/10;

    printf("\n %d",last_digit);

    return 0;
}
