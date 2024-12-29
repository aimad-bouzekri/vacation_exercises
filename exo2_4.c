#include <stdio.h>
int get_input();//get input from user
void print_value(int n);//print the natural numbers befor  the number

int main()
{
print_value(get_input());
    return 0;
}


int get_input(){
    int n;
    printf("Enter number  ");
    scanf("%d", &n);

    return n;
}

void print_value(int n){

    printf("the natural numbers is :\n");
    int i=1;
    while(i<=n){

        printf("%d \n",i);
        i=i+1;
    }

 }


