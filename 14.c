//Write a C program to Enter value and check it is less, equal or greater than zero.

#include <stdio.h>

int main() {
    int num;

    // Input value
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check conditions
    if (num > 0) {
        printf("%d is greater than zero.\n", num);
    } else if (num < 0) {
        printf("%d is less than zero.\n", num);
    } else {
        printf("The number is equal to zero.\n");
    }

    return 0;
}

