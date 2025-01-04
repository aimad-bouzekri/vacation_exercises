#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n,a;
    printf("enter a the size of arr ");
    scanf("%d",&n);
    int* arr = (int*)malloc(sizeof(int)*n);
    for (int i=0;i<n;i++){
    printf("enter array[%d]=   ",i);
    scanf("%d",&a);
    *(arr+i)=a;
    }

    for (int i=0;i<n;i++){
        printf("address of arr[%d] --> %d\n ",i,*(arr+i));


    }
   free(arr);
    return 0;
}
