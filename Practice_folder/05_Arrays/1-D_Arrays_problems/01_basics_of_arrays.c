/*.............Problem 1.......................

Declare an integer array of size 5.
Take input from the user for all elements and print them.*/

// #include <stdio.h>
// int main()
// {
//     int marks[5] = {2, 5, 4, 1, 4};
//     printf("%d %d %d %d %d ", marks[0], marks[1], marks[2], marks[3], marks[4]);
//     return 0;
// }

/*...............Problem 2.....................
Declare an array with values {10, 20, 30, 40, 50}.
Print:
first element
last element
total number of elements (without hardcoding the number)*/

// #include <stdio.h>
// int main(){
//     int result[5] = {10,20,30,40,50};
//     printf("first element = %d\nlast element = %d\ntotal no. of elements = %d",result[0],result[4],5);
//     return 0;
// }

/*...............Problem 3.......................
Declare an array of size 5 but initialize only 2 elements.
Print all elements and observe the remaining values.*/

#include<stdio.h>
int main(){
    int array[5] = {3,5};
    printf("%d %d %d %d %d",array[0],array[1],array[2],array[3],array[4]);
    return 0;
} // printed all the remaining elements as 0....

