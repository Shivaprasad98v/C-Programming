//Write a program that interchange or swap the values of 2 variables with and without using 3rd Variable.

#include <stdio.h>

int main() {
    int a, b, temp;

    // Input values
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    // Swapping using third variable
    temp = a;
    a = b;
    b = temp;

    // Output swapped values
    printf("After swapping (with third variable):\n");
    printf("a = %d, b = %d\n", a, b);




    return 0;
}
