/* Write a C program to input marks of five subjects Physics,Chemistry, Biology, Maths and Computer.
 Calculate percentage and grade according to following.(Using if else ladder)
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F
*/

#include<stdio.h>
int main()  {

int phy,che ,bio,mat,comp;
float per ;
printf("Enter five subjects marks :");
scanf(" %d %d %d %d %d ",&phy,&che,&bio,&mat,&comp);

per =(phy+che+bio+mat+comp)/5.0;
printf(" percentage =%2f ",per);

if (per >=90){
    printf("Grade A");
}
   else if(per>=80){
     printf("Grade B");
   }
   else if (per>=70){
     printf("Grade C");
   }
    else if(per>=60){
         printf("Grade D");
    }
    else if (per>=40){
         printf("Grade E");
    }
    else{
         printf("FAIL");
    }
    return 0;





}


