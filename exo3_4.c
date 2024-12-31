//Write a program to reverse an array.
#include <stdio.h>
int main()
{
    int n;
    printf("enter taill of array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("arr[%d] = ",i);
    scanf("%d",&arr[i]);
    }


    int temp,a=0,taill=n-1;

    while(a<taill){

        temp=arr[a];
        arr[a]=arr[taill];
        arr[taill]=temp;
        a++;
        taill--;

    }


    printf("the rversing of this array is : \n");


    for(int i=0;i<n;i++){
        printf("arr[%d] = %d \n ",i,arr[i]);

    }
    return 0;
}
