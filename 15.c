// Write a C program to find maximum from two numbers.

#include <stdio.h>

int main(){

long a,b;
printf(" Enter the numbers :");
scanf("%d %d",&a,&b);
if (a>b){
        printf("%d is greater than %ld",a,b);
}
else{
    printf("% ld is greater than %ld",b,a);
}
return 0;
}
