
//Write a C program to input month number and print number of days in that month.
#include<stdio.h>
int main() {

int month ;
printf("Enter month (1-12) :");
scanf("%d",&month);
switch(month){

case 1: printf(" number of days =31 \n");
break;

case 2: printf(" number of days =28 or 29 \n");
break;

case 3: printf(" number of days =31 \n");
break;

case 4: printf(" number of days =30 \n");
break;

case 5: printf(" number of days =31 \n");
break;

case 6: printf(" number of days =30 \n");
break;

case 7: printf(" number of days =31 \n");
break;

case 8: printf(" number of days =31 \n");
break;

case 9: printf(" number of days =30 \n");
break;

case 10: printf(" number of days =31 \n");
break;

case 11: printf(" number of days =30 \n");
break;

case 12: printf(" number of days =31 \n");
break;

default : printf("Not a valid month \n");

}

}
