//1. Basic Address Printing

#include<stdio.h>
int main(){
    int x = 34;
    int *ptr = &x;
    printf("%d",ptr);    //prints address of  variable 'x'.
    printf("\n%d",*ptr); //prints value at the address 'x'.
    return 0;
}
