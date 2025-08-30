// Write a C program to Print 1,2,4,8,16,32,64 using while loop.
#include<stdio.h>
#include<math.h>
int main() {

 int n;
printf("enter the value of n :");
scanf("%d",&n);

int i=0;
while(i<n){
    int p= pow(2,i);
    printf("%d \t",p);

    if(i==n){
        printf("%d \t",p);
    }
    i++;
}

   return 0;
}
