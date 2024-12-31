//Write a program to find the sum and avrege of an array.
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
    int sum=0;


    for(int i=0;i<n;i++){

       sum=sum+arr[i];
    }
    int avrege=sum/n;

    printf(" sum = %d \n avrege = %d ",sum,avrege);

    return 0;
}
