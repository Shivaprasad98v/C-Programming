// Write a C program to input angles of triangles and check whether triangle is valid or not.

#include<stdio.h>
int main()
 {

   int a1,a2,a3;
   printf("Enter the three angles of the triangle :");;
   scanf("%d %d %d",&a1,&a2,&a3);

  if((a1+a2>a3) && (a2+a3>a1) && (a3+a1>a2))
    {

      printf("It is a valid triangle ");
    }   else {
    printf("It is a valid triangle ");

             }
}
