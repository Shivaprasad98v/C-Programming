//Write a C program to convert days into years, weeks.
#include <stdio.h>
int main(){

int days,years,weeks;
printf("Enter the days : ");
scanf("%d",&days);

years = (days/365 );
days =days %  365;
weeks = days/7;

printf(" years %d ",years);
printf(" \n weeks %d ",weeks);

return 0;

}
