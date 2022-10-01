/* Write a program to input a three-digit number and display the sum of the digits. */

#include<stdio.h>

int main()
{
    int num,last_digit=0;

        printf("\n Enter number->");
        scanf("%d",&num);

            while(num)
            {
                last_digit=last_digit+(num%10);
                num=num/10;
            }

        printf("sum of the digits = %d",last_digit);

    return 0;

}
