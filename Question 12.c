/* Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
    convert it into USD.    */

#include<stdio.h>

int main()
{
    float priceUSD = 76.23;
    int inr;

    printf("Enter a amount of INR: ");
    scanf("%d",&inr);

    float totalUsdAmount = inr*priceUSD;
    printf("total amount in USD is: %f",totalUsdAmount);

    return 0;
}
