// #include<stdio.h>
// int main(){
//     struct book
//     {
//         /* data */
//         int page;
//         char name;
//         float price;
//     };
// struct book b1 = {34,'a',789.78};
// struct book b2 = {4,'b',79.78};
// struct book b3 = {3,'c',89.78};
// printf("%f\n",b1.price);
// b2.price = 122.25;
// printf("%f",b2.price);
// }

#include<stdio.h>
int main(){
    struct book
    {
        int page;
        char name;
        float price;
    }b1,b2,b3;
struct book b1 = {34,'a',789.78};
struct book b2 = {4,'b',79.78};
struct book b3 = {3,'c',89.78};
printf("%f\n",b1.price);
b2.price = 122.25;
printf("%f",b2.price);
}
