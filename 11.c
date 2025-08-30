//Write a C program to enter length in centimeter and convert it into meter and kilometer.
#include <stdio.h>
int main() {

float cm,m,km;
printf("Enter the length in centimetrs :");
scanf("%f",&cm);
m=cm/100;
km=m/1000;
printf(" Length in meters %2f \n ",m);
printf("Length in kilometers %9f \n",km);

return 0;

}
