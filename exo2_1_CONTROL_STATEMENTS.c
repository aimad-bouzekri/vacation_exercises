#include <stdio.h>


int get_input();
void print_larg(int n);


int main() {
   print_larg(get_input());
    return 0;
}

int get_input(){
 int larg,a,b,c;

      printf("enter the first integer :");
      scanf("%d",&a);
      printf("enter the second integer :");
      scanf("%d",&b);
      printf("enter the third integer :");
      scanf("%d",&c);
      larg=a;
      if(larg<b){
          larg=b;
          return larg;
      }
      else if (larg<c){
          larg=c;
          return larg;
      }else{
          return larg;
      }

}
void print_larg(int n){
    printf("the largest  number in the three numbers is : %d",n);
}
