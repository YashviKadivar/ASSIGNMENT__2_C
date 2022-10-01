/* Write a program to swap values of two int variables */

#include<stdio.h>

int main()
{
    int a,b,temp;

    printf("enter value of a->");
    scanf("%d",&a);

    printf("enter value of b->");
    scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;

    printf("\n a=%d",a);
    printf("\n b=%d",b);

    return 0;
}
