//Write a C program to Print even numbers from 1to n using while loop.

#include<stdio.h>
int main() {

int n;
printf("enter the value of n :");
scanf("%d",&n);

int i=1;
while (i<=n){
    if (i%2==0)
        {
        printf(" \n %d",i);
        }
    i++;
}
    return 0;

}

