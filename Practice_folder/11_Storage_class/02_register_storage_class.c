#include<stdio.h>
int main(){
    {
        register  i;
        for(i=1;i<=10;i++){
            printf("\n%d",i);
        }
    }
    return 0;
}
