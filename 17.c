//Write a C program to check whether a year is leap year or not
#include<stdio.h>
int main()  {

 int year ;
 printf("Enter the year ");
 scanf("%d",&year);

 if(year%4==0){
    printf("%d Is the leap year",year);
 } else {
 printf("%d Is not the leap year",year);
 }

}
