#include<stdio.h>
int take_input(){
     int length,breadth;
      printf("enter the length of the rectangle :");
      scanf("%d",&length);
      printf("enter the breadth of the rectangle :");
      scanf("%d",&breadth);
      return length*breadth;
}

void print_area(int area){
printf("the area of a rectangle using its length and breadth is : %d",area);

}
int main(){

print_area(take_input());
return 0;}
