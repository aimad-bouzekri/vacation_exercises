//SWAP TWO NUMBERS USING POINTERS
#include <stdio.h>

int main()
{

    int a=5,b=6;
    int *ptr=&a;
    int *ptr1=&b;

    printf("after swap\n");
    printf(" a= %d ",*ptr);
    printf("b=%d",*ptr1);

    printf("\n befor swap\n");

    *ptr = *ptr + *ptr1;
    *ptr1= *ptr - *ptr1;
    *ptr = *ptr - *ptr1;

    printf(" a= %d ",*ptr);
    printf("b=%d",*ptr1);


    return 0;
}
