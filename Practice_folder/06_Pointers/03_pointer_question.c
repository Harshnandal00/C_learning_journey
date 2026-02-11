//3. Swap Two Numbers Using Pointers (Without Return)

#include<stdio.h>

int swap(int *a ,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a , b;
    int *x,*y;
    printf("please enter the value of 'a': ");
    scanf("%d",&a);
    printf("please enter the value of 'b': ");
    scanf("%d",&b);
    x = &a , y = &b;
    printf("before swapping the numbers:\na = %d\nb = %d\n",a,b);
    //swapping the numbers
    swap(x,y);
    printf("after swapping the numbers using pointers:\na = %d\nb = %d\n",a,b);
    return 0;
}

