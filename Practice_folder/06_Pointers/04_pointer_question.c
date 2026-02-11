//4. Find Largest Number Using Pointer

#include<stdio.h>
int largest(int *a, int *b, int *c)
{
    int *max = a;
    if (*b > *max)
        max = b;
    if (*c > *max)
        max = c;
    printf("Largest number is: %d\n", *max);
    return 0;
}

int main(){
    int a,b,c;
    int *p1,*p2,*p3;
    p1 = &a , p2 = &b , p3 = &c;
    printf("please enter the  value of 'a': ");
    scanf("%d",&a);
    printf("please enter the  value of 'b': ");
    scanf("%d",&b);
    printf("please enter the  value of 'c': ");
    scanf("%d",&c);
    largest(p1,p2,p3);
    return 0;
}
