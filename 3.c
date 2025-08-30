//Input two numbers and prints its square and cube.
#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Square and cube of num1
    printf("Square of %d = %d\n", num1, num1 * num1);
    printf("Cube of %d = %d\n", num1, num1 * num1 * num1);

    // Square and cube of num2
    printf("Square of %d = %d\n", num2, num2 * num2);
    printf("Cube of %d = %d\n", num2, num2 * num2 * num2);

    return 0;
}
