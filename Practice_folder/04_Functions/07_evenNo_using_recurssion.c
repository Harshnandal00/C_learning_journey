// #include<stdio.h>
// void evenno(int n,int i){
//     if(n>i){
//         return;
//     }
//     if(n%2==0){
//         printf("%d\n",n);
//     }
//     evenno(n+1,i);
// }
// int main(){
//     int start,end;
//     printf("please enter the starting no: ");
//     scanf("%d",&start);
//     printf("please enter the ending no: ");
//     scanf("%d",&end);
//     printf("Even Number from %d to %d:\n",start,end);
//     evenno(start,end);
//     return 0;
// }

//IN REVERSE ORDER.............

#include<stdio.h>
void evenno(int n,int i){
    if(n<i){
        return;
    }
    if(n%2==0){
        printf("%d\n",n);
    }
    evenno(n-1,i);
}
int main(){
    int start,end;
    printf("please enter the starting no: ");
    scanf("%d",&start);
    printf("please enter the ending no: ");
    scanf("%d",&end);
    printf("Even Number from %d to %d:\n",start,end);
    evenno(start,end);
    return 0;
}
