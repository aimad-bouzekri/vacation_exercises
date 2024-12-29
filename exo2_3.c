//Write a program to calculate the factorial of a number using a for loop.
#include <stdio.h>

int main()
{
    int a,fact=1;
    printf("enter the number");
    scanf("%d",&a);

    for(int i=1;i<=a;i++){

        fact=i*fact;

    }
    printf("fact = %d",fact);

    return 0;
}
