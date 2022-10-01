/* Write a program to swap values of two int variables without using a third variable. */

#include<stdio.h>

int main()
{
    int num1,num2;

    printf("\n enter value of number 1->");
    scanf("%d",&num1);

    printf("\n enter value of number 2->");
    scanf("%d",&num2);

        num1=num1+num2;
        num2=num1-num2;
        num1=num1-num2;

            printf("\n NUMBER 1 = %d",num1);
            printf("\n NUMBER 2 = %d",num2);

    return 0;
}
