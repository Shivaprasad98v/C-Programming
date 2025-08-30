//Write a program to count the simple interest
#include <stdio.h>
int main() {

float i,p,r,t ;
printf("Enter the value of principl amount : ");
scanf("%f",&p);
printf("Enter the rate of interest in percentage :");
scanf("%f",&r);

  // Calculate simple interest
    i = (p * r * t) / 100;

    // Output result
    printf("Value of simple interest = %f\n", i);

    return 0;


}
