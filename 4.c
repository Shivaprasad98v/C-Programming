//Input two numbers and prints its Addition, Subtraction, Multiplication, and Division.
#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Square and cube of num1
    printf("Addition of %d \n ", num1 + num2);
    printf("Subtraction of %d \n ", num1 - num2);

    // Square and cube of num2
    printf("Multiplication of %d \n ", num1 * num2);
    printf("Division %d\n", num1 /num2);

    return 0;
}
