//2. Modify Value Using Pointer

#include<stdio.h>
int main(){
    int x , *ptr;
    x = 34;
    ptr = &x;
    printf("original value: %d\n",x);
    *ptr = 34+10;
    printf("updated value: %d\n",x);
    return 0;
}
