//Write a C program to enter temperature in Celsius and convert it into Fahrenheit.

#include <stdio.h>
int main() {

float c,f;
printf("Enter the Temparature in celcius :");
scanf("%f",&c);
f=((9*c)/5)+32;
printf(" Temparature in Fahrenheit = %2f",f);

return 0;

}

