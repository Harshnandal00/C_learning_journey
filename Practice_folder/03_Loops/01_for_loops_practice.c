#include<stdio.h>
int main(){
    // primitive method , lengthy , not easy to type...
    // printf("Hello World\nHello World\nHello World\nHello World\nHello World\n");
    int i,n;
    printf("the value of 'i' should be greater than 'n'.\n");
    printf("please enter the value of i: ");
    scanf("%d",&i);
    printf("please enter the value of n: ");
    scanf("%d",&n);
    for(i;i>=n;i--){ // for loop (initialization,condition,increment/decrement)
        printf("%d\n",i);
    }
    return 0;
}