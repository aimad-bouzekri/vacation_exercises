//Write a recursive function to calculate the factorial of a number.
#include <stdio.h>
int factorial(int n ){

    for (int i=n;i>=0;i--){

        if (i==1 || i==0){
        return 1;
        }
         int  fact= factorial( i-1 )*i;

        return fact;
    }

}
int main()
{

   int n;
    printf("enter a number");
    scanf("%d",&n);
   printf("%d",factorial(n));

    return 0;
}
