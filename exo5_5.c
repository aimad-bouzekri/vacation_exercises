//Write a function to check if a number is prime.

#include <stdio.h>
int sum_of_digit(int n ){
    int sum=0;
    while ( n>0){
        sum=(n%10) +sum;
        n=n/10;

    }
    return sum;
}
int main()
{

    int n;
    printf("enter a number");
    scanf("%d",&n);
   //printf("%d",10%n);
      printf("the  sum of digit of the number %d =%d ",n,sum_of_digit( n ));
   return 0 ;}
