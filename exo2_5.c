
#include <stdio.h>

int get_input();//get input from user
void  table(int n);//print the table of multuplication
void print_mult(int n);//print the rusult of multuplicat

int main(){

 table(get_input());
    return 0;
}
int get_input(){
    int n;
    printf("Enter number  ");
    scanf("%d", &n);

    return n;
}
void  table(int n){
       for(int i=0;i<=10;i++){


        printf("__________");

    }printf("\n");

    for(int i=0;i<=10;i++){


        printf(" \t|%d| ",i);

    }
    printf("\n");
     for(int i=0;i<=10;i++){


        printf("__________");

    }printf("\n");



        print_mult( n);

}
void print_mult(int n){
                  //print the rusult of multuplicat
    for (int j=0;j<=10;j++){
        printf("\t|%d| ",j*n);
    }

}

