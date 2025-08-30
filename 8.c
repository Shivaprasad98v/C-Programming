//Calculate the area of circle and triangle
#include <stdio.h>
int main() {

float r,b,h,x,y;
printf("Enter the radius of the circle :");
scanf("%f",&r );

printf("Enter the base and height of triangle:");
scanf("%f %f",&b,&h );
x=3.14*r*r;
printf("The Radius of circle :%f \n",x);

y=(b*h)/2;
printf("The area of Triangle %f",y);

return 0;

}
