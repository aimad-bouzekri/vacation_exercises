//Write a function to check if a number is prime.

#include <stdio.h>
int is_prime(int n ){

    for (int i=2;i<n;i++){

        int x = n%i ;
        if (x == 0){
        return 0;
        }
    }
    return 1;
}
int main()
{

    int n;
    printf("enter a number");
    scanf("%d",&n);
    int prime;
  prime = is_prime( n );

   if (prime == 1){

       printf("the  number %d id a prime number",n);
   }else {

       printf("the  number %d is not a prime",n);
   }
   return 0 ;}
