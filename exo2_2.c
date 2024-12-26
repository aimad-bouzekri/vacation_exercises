#include <stdio.h>


void check_input();


int main() {
 check_input();
    return 0;
}

void check_input(){
 int a;

      printf("enter the number to check :");
      scanf("%d",&a);


      if(a<0){

          printf("the number %d is negative ",a) ;
      }
      else if (a==0){

           printf("the number %d is NULL ",a) ;
      }else{
          printf("the number %d is positive ",a) ;
      }

}
