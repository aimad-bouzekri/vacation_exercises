#include<stdio.h>
void take_input_and_swap(){
    int a,b;

      printf("enter the first integer  a =");
      scanf("%d",&a);
      printf("enter the second integer b =");
      scanf("%d",&b);

      a=a+b;
      b=a-b;
      a=a-b;

      printf("a = %d \nb = %d ",a,b);


}

int main(){
take_input_and_swap();

return 0;}}
