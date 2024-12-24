#include<stdio.h>


int take_input(){
     int a,b;

      printf("enter the first integer :");
      scanf("%d",&a);
      printf("enter the second integer :");
      scanf("%d",&b);
      return a+b;
}

void print_sum(int n){
printf("the sum of the two integer : %d",n);

}
int main(){

print_sum(take_input());
return 0;}
