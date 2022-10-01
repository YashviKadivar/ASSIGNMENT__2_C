/* Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right.  */

#include<stdio.h>

int main()
{
    int a,b,c;

    printf("\n Enter a Number->");
    scanf("%d",&a);

    b=a/10;
    c=a%10;
    a=c*100+b;

    printf("\n %d",a);

    return 0;
}
