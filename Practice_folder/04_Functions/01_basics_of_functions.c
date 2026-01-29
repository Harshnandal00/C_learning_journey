#include<stdio.h>
#include<math.h>
void printNumbers(){
    printf("hello there! good morning\n");
}
void aboutme(){
    printf("harsh here! learing functions in C language..!\n");
}
float fraction(){
    float x = 3.5;
}
int main(){
    printNumbers();  //user-defined functions
    aboutme();  //user-defined functions
    printf("%f",sqrt(2));  //built-in functions
    return 0;
}
