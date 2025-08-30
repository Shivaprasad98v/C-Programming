//Verify the formula a=p*(1+(r/100)/n)-p
#include <stdio.h>
int main(){

int a,p,r,n;
printf(" Enter the value of  a, p ,r, n :");
scanf("%d %d %d   %d",&a,&p,&r,&n);
 a=p*(1+(r/100)/n)-p;
 printf("The value of a : %f",a);
 return 0;

}
