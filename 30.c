//Write a C program to Print N to 1 using while loop

#include<stdio.h>
int main()  {
int n;
printf("enter the value of n :");
scanf("%d",&n);
int i=n;
while( i>=1) {
    printf("%d \n",i);
    i-- ;
}
printf("\n");
return 0;

}
