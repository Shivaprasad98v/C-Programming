//Write a C program to check whether a character is alphabet or not.
#include<stdio.h>
int main() {

char ch ;
printf("Enter the character :");
scanf("%c",&ch);

if((ch>='a' && ch <='z') || (ch>='A' && ch<='Z')) {
    printf("%c is aplhabet ",ch);;
}
else {
    printf("%%d is not an alphabet ");
}
}



