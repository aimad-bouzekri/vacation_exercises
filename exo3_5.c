#include <stdio.h>



int main()
{


    int arr1[5],arr2[5],arr3[10];

    printf("Enter the first array1 \n ");
    for (int i = 0; i < 5; i++) {
      scanf("%d", &arr1[i]);

    }
    printf("Enter the second array2 \n ");
    for (int i = 0; i < 5; i++) {
      scanf("%d", &arr2[i]);

    }
    for (int  i =0;i<5;i++){//mrgine the to arrays in other one
    arr3[i]=arr1[i];
    arr3[i+5]=arr2[i];
    }
    for(int i=0;i<10;i++){//printin the result  of merging
      printf("_arr3[%d]= %d _",i,arr3[i]);
    }
    return 0;

}
