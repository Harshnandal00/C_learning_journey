#include<stdio.h>
int i = 1;
void increment(){
    i = i+1;
    printf("%d\n",i);
}
int main(){
    printf("%d\n",i);
    increment();
    return 0;
}
