#include <stdio.h>

void get_input(int arr[5]);//get input from user

void print_arr(int arr[5]);//print the array elements

int main(){
    int arr[5];
get_input(arr);
print_arr(arr);


    return 0;
}
void get_input(int arr[5]){

    for (int i=0;i<5;i++){
    printf("\t arr[%d]  ",i);//scan the element of array
    scanf("%d", &arr[i]);
    }

}

void print_arr(int arr[5]){

   for (int i=0;i<5;i++){
        printf(" arr[%d] = %d  ",i,arr[i]);//print the array elements
   }

}
