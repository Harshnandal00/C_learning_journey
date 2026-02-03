#include <stdio.h>
int count(int n) {
    if (n == 0)
        return 0;
    return 1 + count(n / 10);
}
int main() {
    int n;
    printf("Please enter the number: ");
    scanf("%d", &n);
    printf("Number of digits in the number = %d\n", count(n));
    return 0;
}
