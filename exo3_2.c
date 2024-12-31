//Write a program to find the largest and smallest elements in an array.
#include <stdio.h>



int main()
{
    int arr[5]={1,-6,10,0,5};
    int small,large;
    large=arr[0];
    small=arr[0];

    for(int i=0;i<5;i++){

        if(arr[i]<small){
            small=arr[i];
        }
        if(arr[i]>large){
            large=arr[i];
        }
    }


    printf(" smallest elements=%d \n largest elements=%d",small,large);

    return 0;
}
