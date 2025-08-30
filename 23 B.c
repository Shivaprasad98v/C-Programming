//Write a program that interchange or swap the values of 2 variables with and without using 3rd Variable.
#include <stdio.h>

int main() {
    int a, b;

    // Input values
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    // Swapping without using third variable
    a = a + b;  // Step 1: a becomes sum of a and b
    b = a - b;  // Step 2: b becomes the original a
    a = a - b;  // Step 3: a becomes the original b

    // Output swapped values
    printf("After swapping (without third variable):\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
