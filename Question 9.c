/*  Write a program to print size of an int, a float, a char and a double type variable */

#include<stdio.h>

int main()
{
    printf("Size of int is = %d\n", sizeof(int));        // 4
    printf("Size of float is = %d\n", sizeof(float));    // 4
    printf("Size of char is =  %d\n", sizeof(char));    // 1
    printf("Size of double is = %d\n", sizeof(double)); // 8

    return 0;
}
