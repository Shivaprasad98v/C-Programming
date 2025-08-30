// Write a C program to Input a Number of Chairs and its Total Cost and Prints the Cost of Each chair.

#include <stdio.h>
int main(){

int c,t;
float  costPerChair ;
printf("Enter the total no of chairs :");
scanf("%d",&c);
printf(" Cost of total chairs :");
scanf("%d",&t);

// Calculate cost per chair
    if (c > 0) {
        costPerChair = t / c;
        printf("Cost of each chair = %.2f\n", costPerChair);
    } else {
        printf("Number of chairs must be greater than 0!\n");
    }
 return 0;

}


