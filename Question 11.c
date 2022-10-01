/*  Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)  */

#include<stdio.h>

int main()
{
    int a,b;

    printf("\n Enter a Number->");
    scanf("%d",&a);

    printf("\n Enter a digit->");
    scanf("%d",&b);

    a=a*10;
    a=a+b;

    printf("\n %d",a);

    return 0;
}
