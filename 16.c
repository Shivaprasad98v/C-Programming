//Write a C program to Input 3 number and print the maximum among them.
#include <stdio.h>

int main(){

int a,b,c;
printf("Enter the three numbers :");
scanf("%d %d %d",&a,&b,&c);
if (a>b){
    if(a>c)
        printf(" \n a=%d is maximum",a);
    } else {
    printf(" \n c=%d is maximum ",c);
    } if (b>c){
        printf("\n b=%d is  maximum ",b);
    }else{
    printf("\n c=%d is maximum ",c);
    }

}




