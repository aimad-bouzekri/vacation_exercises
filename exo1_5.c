#include <stdio.h>
int get_number(){
int a;
printf("enter the number to check ");
scanf("%d",&a);
return a;
}

void check(int n){


    if (n % 2 == 0) {
        printf("%d is even ",n);
    } else {
        printf("%d is odd ",n);
    }
}

int main() {

check(get_number());
    return 0;
}
