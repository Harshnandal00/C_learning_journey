/*
=====================================
POINTERS IN C – BASIC NOTES
File: basics.c
=====================================

1. WHAT IS A POINTER?
---------------------
A pointer is a variable that stores the ADDRESS of another variable.

Example:
    int x = 10;
    int *p = &x;

Here:
    x  -> stores value 10
    &x -> address of x
    p  -> stores address of x
    *p -> value at that address (10)

-------------------------------------
2. DECLARATION OF POINTER
-------------------------------------
Syntax:
    data_type *pointer_name;

Example:
    int *p;
    float *f;

-------------------------------------
3. ADDRESS OF OPERATOR (&)
-------------------------------------
The & operator gives the address of a variable.

Example:
    int x = 5;
    printf("%d", &x);   // prints address of x

-------------------------------------
4. DEREFERENCE OPERATOR (*)
-------------------------------------
The * operator is used to access the value at the address.

Example:
    int x = 10;
    int *p = &x;
    printf("%d", *p);   // prints 10

-------------------------------------
5. POINTER AND VARIABLE RELATION
-------------------------------------
x   -> value
&x  -> address of x
p   -> address stored in pointer
*p  -> value at that address

-------------------------------------
6. CHANGING VALUE USING POINTER
-------------------------------------
If we change *p, the original variable also changes.
*/

#include <stdio.h>

int main() {

    /* Example 1: Basic Pointer */
    int x = 10;
    int *p = &x;

    printf("Value of x = %d\n", x);
    printf("Address of x = %d\n", &x);
    printf("Value of p (address of x) = %d\n", p);
    printf("Value at address p (*p) = %d\n\n", *p);

    /* Example 2: Modify value using pointer */
    *p = 25;
    printf("After changing *p\n");
    printf("Value of x = %d\n\n", x);

    /* Example 3: Pointer with another variable */
    int y = 50;
    p = &y;

    printf("Value of y = %d\n", y);
    printf("Value using pointer (*p) = %d\n\n", *p);

    /* Example 4: Pointer inside function concept (preview)
       NOTE: Actual pointer functions will be taught later */
    int a = 5;
    int *ptr = &a;
    *ptr = *ptr + 10;

    printf("Value of a after pointer operation = %d\n", a);

    return 0;
}

/*
-------------------------------------
IMPORTANT NOTES TO REMEMBER
-------------------------------------
1. Always initialize a pointer before using it.
2. Never use a pointer without assigning address.
3. * in declaration and * in usage mean different things.
4. Pointer helps to modify original data.
-------------------------------------
*/
